#!/bin/bash
# set var
PASSWD_FILE=/etc/passwd

# get user name
read -p "Enter a user name: " username

# try to locate username in in /etc/passwd
if grep "^$username" $PASSWD_FILE > /dev/null
then
    echo "User $username found in $PASSWD_FILE file."
else
    echo "User $username not found in $PASSWD_FILE file."
fi

