#!/bin/bash
# Write a shell program to read a number and display reverse the number. For example, 123 should be printed as as 321.

rev=0

read -p "Enter number: " num

while [ $num -gt 0 ]
do
    digit=$(( num % 10 ))
    rev=$(( rev * 10 + digit ))
    num=$(( num / 10 ))
done

echo "Reverse of number = $rev"
