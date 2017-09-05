#!/bin/bash

# set -x : Display commands and their arguments as they are executed.
# set -v : Display shell input lines as they are read.
# set -n : Read commands but do not execute them. This may be used to check a shell script for syntax errors.

### Turn on debug mode ###
set -x

# Run shell commands
echo "Hello $(logname)"
echo "Today is $(date)"
echo "Users currently on the machine, and their processes:"

### Turn OFF debug mode ###
set +x

# Add more commands without debug mode
