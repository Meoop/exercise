#!/bin/bash
test $(id -u) -eq 0 && echo "You are root" || echo "You are NOT root."
test $(id -u) -eq 0 && echo "Root user can run this script." || echo "Use sudo or su to become a root user."

test 5 -gt 2 && echo "Yes"
test 1 -lt 2 && echo "Yes"
test 5 -eq 5 && echo Yes || echo No
test 5 -eq 15 && echo Yes || echo No
test 5 -ne 10 && echo Yes || echo No
test -f /etc/resolv.conf && echo "File /etc/resolv.conf found." || echo "File /etc/resolv.conf not found."
test -f /etc/resolv1.conf && echo "File /etc/resolv1.conf found." || echo "File /etc/resolv1.conf not found."
