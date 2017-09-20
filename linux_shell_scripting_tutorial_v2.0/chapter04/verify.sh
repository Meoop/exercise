#!/bin/bash
read -p "Enter a password: " pass
if test "$pass" == "hello"
then
    echo "Password verified."
fi
