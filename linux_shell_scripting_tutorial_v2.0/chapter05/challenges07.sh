#!/bin/bash
# Write a shell script to determine if an input number is a palindrome or not. A palindromic number is a number where the digits, with decimal representation usually assumed, are the same read backwards, for example, 58285.

read -p "Enter number: " n

# store single digit
sd=0

# store oriiginal number
on=$n

while [ $n -gt 0 ]
do
    sd=$(( $n % 10 ))
    n=$(( $n / 10 ))
    rev=$(echo ${rev}${sd})
done

if [ $on -eq $rev ]
then
    echo "Number is palindrome"
else
    echo "Number is NOT palindrome"
fi
