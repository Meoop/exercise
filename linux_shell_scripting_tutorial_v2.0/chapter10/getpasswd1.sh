#!/bin/bash
# getpasswd1.sh - A simple shell script to read users password.
# password storage
data=/tmp/password.tmp

# trap it
trap "rm -f $data" 0 1 2 5 15

# get password
dialog --title "Password" \
    --clear \
    --passwordbox "Enter your password" 10 30 2> $data

ret=$?

# make decision
case $ret in
    0)
        echo "Password is $(cat $data)" ;;
    1)
        echo "Cancel pressed." ;;
    255)
        [ -s $data ] && cat $data || echo "ESC pressed." ;;
esac
