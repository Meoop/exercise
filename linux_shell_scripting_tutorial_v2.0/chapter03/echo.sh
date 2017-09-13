#!/bin/bash
# Display welcome message, computer name and date
echo "*** Backup Shell Script ***"
echo
echo "*** Run time: $(date) @ $(hostname)"
echo

# Define variables
BACKUP="/NAS05"
NOW=$(date +"%d-%m-%Y")

# Let us start backup
echo "*** Dumping MySQL Database to $BACKUP/$NOW..."

# Just sleep for 3 secs
sleep 3

# And we are done...
echo 
echo "*** Backup wrote to $BACKUP/$NOW/lastest.tar.gz"

