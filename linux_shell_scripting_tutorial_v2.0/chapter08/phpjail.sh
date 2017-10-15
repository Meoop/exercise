#!/bin/sh
# A shell script to start / stop php-cgi process.
fFCGI=/usr/bin/spawn-fcgi
fIP=127.0.0.1
fPORT=9000
fUSER=phpjail
fGROUP=phpjail
fCHILD=10
fJAILDIR=/phpjail
fPID=/var/run/fcgi.php.pid
fPHPCGI=/usr/bin/php-cgi

# path to binary files.
PKILL=/usr/bin/pkill
RM=/bin/rm
PGREP=/usr/bin/pgrep
GREP=/bin/grep
ID=/usr/bin/id

# Must be run as root else die
[ $(${ID} -u) -eq 0 ] || { echo "$0: Only root may run this script."; exit 1; }

# Jail user must exits else die
${GREP} -q $fUSER /etc/passwd || { echo "$0: User $fUSER not found in /etc/passwd."; exit 2; }

# Jail group must exits else die
${GREP} -q $fGROUP /etc/passwd || { echo "$0: Group $fGROUP not found in /etc/group."; exit 3; }

# Jail directory must exits else die
[ ! -d ${fJAILDIR} ] && { echo "$0: php-cgi jail directory \"${fJAILDIR}\" not found."; exit 4; }

# Use case to make decision 
case "$1" in
    start)
        # start php-cgi in jail at given IP and server port
        $fFCGI -a $fIP -p $fPORT -u $fUSER -g $fGROUP -C $fCHILD -c $fJAILDIR -P $fPID -- $fPHPCGI 
        [ $? -eq 0 ] && echo "Starting php-cgi .. [ OK ]" || echo "Starting  php-cgi .. [ FAILED ]"
        ;;
    stop)
        #  make sure php-cgi is running
		read line < "$fPID"
        if [ -d /proc/$line ]
        then
            # kill php-cgi owned by user
        	${PKILL} -KILL -u $fUSER php-cgi 
        	[ $? -eq 0 ] && echo "Stopping php-cgi .. [ OK ]" \
        	            || echo "Stopping php-cgi .. [ FAILED ]" 

            ${RM} -f $fPID
	    else
        	echo "$0: php-cgi is not running."
        fi
        ;;
     status)
        # find out if php-cgi is running or not
        ${PGREP} -u ${fUSER} php-cgi >/dev/null 2>&1 
        [ $? -eq 0 ] && echo "$0: php-cgi is running at $fIP:$fPORT" \
                    || echo "$0: php-cgi is not running at $fIP:$fPORT"
        ;;
     *)
        # display usage
        echo "Usage: $0 {start|stop|status}"
esac
