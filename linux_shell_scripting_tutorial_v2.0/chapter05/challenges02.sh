#!/bin/bash
# Write a menu driven script using the select statement to print calories for food items such as pizza, burger, Salad, Pasta etc.
PS3="Enter the food: "
select food in pizza burger salas pasta
do
    case $food in
        pizza)
            echo "$food - 266kcal"
            ;;
        burger)
            echo "$food - 294.9kcal"
            ;;
        salas)
            echo "$food - 81kcal"
            ;;
        pasta)
            echo "$food - 131kcal"
            ;;
        *)
            echo "Error: Please try again (select 1..4)!"
            ;;
    esac
done
