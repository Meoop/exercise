#!/bin/bash
clear
echo "*************************"
echo "*** Joes Pizza Parlor ***"
echo "*************************"
echo 
echo "Today is $(date)"
echo 
read -p "Enter a pizza parlor bill : " bill

tip=$(echo "scale=2; (${bill}*10) / 100" | bc -l)
#tip=$(( ${bill} * 10 / 100 ))
total=$(echo "scale=2; $tip + $bill" | bc -l)
#total=$(( $tip + $bill ))
echo "Pizza bill : $bill"
echo "Tip (10%)  : ${tip}"
echo "--------------------------"
echo "Total      : ${total}"
echo "--------------------------"
