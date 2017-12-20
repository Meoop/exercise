#!/bin/bash
# dvdcopy.sh - A sample shell script to display a progreee bar
# set counter to 0
counter=0
(
# set infinite while loop
while :
do
    cat <<EOF
XXX
$counter
Disk copy /dev/dvd to /home/data ($counter%):
XXX
EOF
# increase counter bt 10
(( counter+=10 ))
[ $counter -eq 100 ] && break
# deply it a specified amount of time i.e 1 sec
sleep 1
done
) | dialog --title "File Copy" --gauge "Please wait" 7 70 0
