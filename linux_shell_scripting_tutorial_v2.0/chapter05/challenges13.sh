#!/bin/bash
# Write a shell script to search for no password entries in /etc/passwd and lock all accounts.

USERS="$(cut -d: -f1 /etc/passwd)"

echo "Searching for null password..."
for u in $USERS
do
    passwd -S $u | grep -Ew "NP" > /dev/null
    if [ $? -eq 0 ]
    then
        echo "$u   no password"
        # passwd -l $u
    fi
done
