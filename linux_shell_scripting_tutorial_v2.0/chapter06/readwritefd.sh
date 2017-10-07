#!/bin/bash
# Let us assign the file descriptor to file for input fd # 3 is Input file 
exec 3< /etc/resolv.conf

# Let us assign the file descriptor to file for output fd # 3 is Input file 
exec 4> /tmp/output.txt
 
# Use read command to read first line of the file using fd # 3
read -u 3 a b

# Display data on screen
echo "Data read from fd # 3:"
echo $a $b

# Write the same data to fd # 4 i.e. our output file
echo "Writing data read from fd #3 to fd#4 ... "
echo  "Field #1 - $a " >&4
echo  "Field #2 - $b " >&4

# Close fd # 3 and # 4
exec 3<&-
exec 4<&-
