#!/bin/bash
# The strings are equal 'STRING1 = STRING2'
read -s -p "Enter your password: " pass
echo
if test "$pass" = "tom"
then
    echo "Your are allowed to login!"
fi

