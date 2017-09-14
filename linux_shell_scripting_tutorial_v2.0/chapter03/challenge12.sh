#!/bin/bash
read -p "Enter two values : " a b
read -p "Enter operand ( +, -, /, *) : " op
echo "a = $a"
echo "b = $b"
ans=$(( $a $op $b ))
echo "$a $op $b = $ans"
