#!/bin/bash
# A sample shell script to backup MySQL database

# Get todays date
NOW=$(date +"%d-%m-%Y")

# Location to story mysql backup
BAK="/nas10/.mysql-database"

# MySQL Server Login Information
MUSER="root"
MPASS="password"
MHOST="127.0.0.1"

# Full path to common utilities
MYSQL="/usr/bin/mysql"
MYSQLDUMP="/usr/bin/mysqldump"
GZIP="/bin/gzip"

# If backup directory does not exits create it using logical not
if [ ! -d $BAK ]
then
    mkdir -p $BAK
fi

# Get all mysql databases names
DBS="$( $MYSQL -u $MUSER -p$MPASS -h $MHOST -Bse 'show databases')"

# Start backup
echo -n "Dumping..."

#Use thr for loop
for db in $DBS
do
    FILE="$BAK/mysql-$db.$NOW-$(date +"%T").gz"
    $MYSQLDUMP -u $MUSER -h $MHOST -p$MPASS $db | $GZIP -9 >$FILE
    echo -n "."
done
echo -n "...Done"
echo ""
