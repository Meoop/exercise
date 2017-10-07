#!/bin/bash
# Let us assign the file descriptor to file for input fd # 3 is Input file 
exec 3< /etc/resolv.conf

# Let us assign the file descriptor to file for output fd # 3 is Input file 
exec 4> /tmp/output.txt
 
# Use read command to read first line of the file
read -u 3 a b

echo "*** My pid is $$"
mypid=$$

echo "*** Currently open files by $0 scripts.."

ls -l /proc/$mypid/fd

# Close fd # 3 and # 4
exec 3<&-
exec 4>&-
