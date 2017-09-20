#!/bin/bash
test $(id -u) -eq 0 && echo "You are root" || echo "You are NOT root."
test $(id -u) -eq 0 && echo "Root user can run this script." || echo "Use sudo or su to become a root user."
