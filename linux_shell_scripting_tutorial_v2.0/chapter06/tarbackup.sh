#!/bin/bash
TAR=/bin/tar

# SCSI tape device
TAPE=/DEV/st0

# Backup dir names
BDIRS="/www /home /etc /usr/local/mailboxes /phpjail /pythonjail /perlcgibin"

# Logfile name
ERRLOG=/tmp/tar.logfile.txt

# Remove old log file and create the empty log file
>$ERRLOG

# Okay lets make a backup
$TAR -cvf $TAPE $BDIRS 2>$ERRLOG

