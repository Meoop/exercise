#!/bin/bash
# convert all domain names to a lowercase
DOMAINS="$(echo $@|tr '[A-Z]' '[a-z]')"

# Path to named.conf
NAMEDCONF="/var/named/chroot/etc/named.conf"

# Check named.conf for error
NAMEDCHEKCONF="/usr/sbin/named-checkconf -t /var/named/chroot/"

# Display usage and die
if [ $# -eq 0 ]
then
    echo "Usage: $0 domain1 domain2 ..."
    exit 1
fi

# okay use for loop to process all domain names passed
# as a command line args
for d in $DOMAINS
do
	# if domain  alrady exits, skip the rest of the loop
    grep $d $NAMEDCONF >/dev/null
    if [ $? -eq 0 ]
    then
        echo "$d exits in in $NAMEDCONF, skiping ..."
        continue # skip it
    fi
        
    # else add domain to named.conf
    echo "Adding domain $d to $NAMEDCONF..."

		
    echo "zone \"${d}\" {" >> $NAMEDCONF
    echo "        type master;"  >> $NAMEDCONF
    echo "        file \"/etc/named/master.${d}\";"  >> $NAMEDCONF
    echo "        allow-transfer { slaveservers; };"  >> $NAMEDCONF
    echo "};"  >> $NAMEDCONF

    # Run named configuration file syntax checking tool
    $NAMEDCHEKCONF >/dev/null
    if [ $? -ne 0 ]   # error found?
    then 
        echo "**** Warning: named-checkconf - Cannot reload named due to errors for $d ****"
    else
        echo "**** Domain $d sucessfully added to $NAMEDCONF ****"        		        
    fi
done
