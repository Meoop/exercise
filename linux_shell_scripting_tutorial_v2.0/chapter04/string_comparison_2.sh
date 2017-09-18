#!/bin/bash
# The strings are not equal 'STRING1 != STRING2'
read -s -p "Enter your password: " pass
echo
if test "$pass" != "tom"
then
    echo "Wrong password!"
fi

