#!/bin/bash
# Let us assign the file descriptor to file for input
# fd # 3 is Input file 
exec 3< /etc/resolv.conf
 
# Executes cat commands and  read input from 
# the file descriptor (fd) # 3 i.e. read input from /etc/resolv.conf file
cat <&3
 
# Close fd # 3
exec 3<&-
