#!/bin/bash
# Purpose: Detecting Hardware Errors
# Author: Vivek Gite
# Note: The script must run as a corn-job
# Last updated on: 28-Aug-2007

# Story path to commands
LOGGER=/usr/bin/logger
FILE=/var/log/mcelog
FILE=/dev/mcelog

# Story email setting
AEMAIL="vivek@nixcraft.net.in"
ASUB="H/W Error - $(hostname)"
AMESS="Warning - Hardware errors found on $(hostname) @ $(date). See log file for the details /var/log/mcelog."
OK_MESS="OK: NO Hardware Error Found."
WARN_MESS="ERROR: Hardware Error Found."

# Check if $FILE exists or not
if test ! -f "$FILE"
then
    echo "Error - $FILE not found or mcelog is not configured for 64 bit Linux systems."
    exit 1
fi

# okay search for errors in file
error_log=$(grep -c -i "Hardware error" $FILE)

# error found or not?
if [ $error_log -gt 0 ]
then
    echo "$AMESS" | email -s "$ASUB" $AEMAIL
else
    echo "$OK_MESS"
fi


