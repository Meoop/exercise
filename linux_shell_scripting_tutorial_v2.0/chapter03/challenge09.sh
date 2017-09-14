#/bin/bash
read -p "Enter any directory name : " directory

# Make sure dir does not exits
if [ ! -d "/tmp/${directory}" ]
then
	mkdir -v "/tmp/${directory}"
else
	echo "$0: /tmp/${directory} already exits."
fi
