#!/bin/bash
# printf command examples
vech="Car"
printf "%s\n" $vech
printf "%1s\n" $vech
printf "%1.1s\n" $vech
printf "%1.2s\n" $vech
printf "%1.3s\n" $vech
printf "%10.3s\n" $vech
printf "%10.1s\n" $vech
no=10
printf "%d\n" $no
big=5355765
printf "%e\n" $big
printf "%5.2e\n" $big
sales=54245.22
printf "%f\n" $sales
printf "%.2f\n" $sales

