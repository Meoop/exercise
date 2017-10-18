#!/bin/bash
# progressdots.sh - Display progress while making backup
# Based on idea presnted by nixCraft forum user rockdalinux
# Show progress dots
progress(){
    echo -n "$0: Please wait..."
    while true
    do
        echo -n "."
        sleep 5
    done
}

dobackup(){
    # put backup commands here
    top >/dev/null 2>&1
    #tar -zcvf /dev/st0 /home > /dev/null 2>&1
}

# start it in the background
progress &

# Save progress() PID
# You need to use the PID to kill the function
MYSELF=$!

# start backup
dobackup

# kill progress
kill $MYSELF >/dev/null 2>&1

echo -n "...done."
echo 
