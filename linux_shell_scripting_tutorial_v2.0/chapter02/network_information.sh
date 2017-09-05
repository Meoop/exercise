#!/bin/bash
# A Simple Shell Script To Get Linux Network Information
# Meoop - 01/09/2017
echo "Current date : $(date) @ $(hostname)"
echo "Network configuration"
/sbin/ifconfig
