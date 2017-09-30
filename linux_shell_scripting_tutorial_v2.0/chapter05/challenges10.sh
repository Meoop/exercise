#/bin/bash
# Write the shell program which produces a report from the output of ls -l in the following format:
# file1
# file2
# [DIR] test/
# Total regular files : 7
# Total directories : 4
# Total symbolic links : 0
# Total size of regular files : 2940

# copying the out of ls -l command to a file
ls -l > /tmp/ls.tmp

# initilizing values
sum=0
dir=0
file=0
link=0

# read the file
while read line
do
    # getting the first character of echo line to check the type of file
    read -n 1 c <<< $line
    # checking if the file is a directory or not
    if [ $c == "d" ]
    then
        ((dir++))
        echo "[DIR] ${line}/" |cut -d" " --fields="1 11" >> /tmp/dir.tmp
    elif [ $c == "-" ]
    then
        ((file++))
        echo $line |cut -d" " -f9 >> /tmp/file.tmp
    elif [ $c == "l" ]
    then
        ((link++))
    fi

    size=$( echo $line |cut -d" " -f5)
    sum=$(( sum+size ))
done < /tmp/ls.tmp

cat /tmp/file.tmp
cat /tmp/dir.tmp

echo "Totle regular files = $file"
echo "Totle directories = $dir"
echo "Totle symbolic links = $link"
echo "Totle size of regular file = $size"

rm /tmp/file.tmp
rm /tmp/dir.tmp
rm /tmp/ls.tmp
