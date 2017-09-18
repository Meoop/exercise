#!/bin/bash
read -s -p "Enter a password: " pass
if test "$pass" == "hello"
then
    echo "Password verified."
else
    echo "Password not correct."
fi
