#!/bin/bash
# define variables at the start of script
# so that it can be accessed by our function
TEST="/tmp/filename"

# writ delete_file() function
delete_file(){
    echo "Deleting $TEST..."
}

# call delete_file
delete_file
