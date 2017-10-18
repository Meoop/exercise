#!/bin/bash
file="$1"

# User-defined function
is_file_dir(){
    # $f is local variable
    local f="$1"
    # file attributes compariesons using test i.e. [ ... ]
    [ -f "$f" ] && { echo "$f is a regular file."; exit 0; }
    [ -d "$f" ] && { echo "$f is a directory."; exit 0; }
    [ -L "$f" ] && { echo "$f is a symbolic link."; exit 0; }
    [ -x "$f" ] && { echo "$f is am executeble file."; exit 0; }
}

# make sure filename supplied as command line arg else die
[ $# -eq 0 ] && { echo "Usage: $0 filename"; exit 1; }

# invoke the is_file_dir and pass $file as arg
is_file_dir "$file"
