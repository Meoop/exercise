#!/bin/bash
read -p "Enter # 5 : " number
if test $number == 5
then
    echo "Thinks for entering # 5"
fi
if test $number != 5
then
    echo "I told you to enter # 5. Please try again."
fi
