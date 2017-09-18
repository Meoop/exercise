#!/bin/bash
# The length of STRING is zero '-z STRING'
read -s -p "Enter your password: " pass
echo
if test -z $pass
then
    echo "No password was entered!!! Cannot verify an empty password!!!"
    exit 1
fi
if test "$pass" != "tom"
then
    echo "Wrong password!"
fi

