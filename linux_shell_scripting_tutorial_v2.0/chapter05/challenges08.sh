#!/bin/bash
# Write a shell program to read a number *such as 123) and find the sum of digits (1+2+3=6).
read -p "Enter number: " n

sum=0

while [ $n -gt 0 ]
do
    digit=$(( $n % 10 ))
    sum=$(( sum + digit ))
    n=$(( $n / 10 ))
done

echo "Sum of digits = $sum"
