#!/bin/zsh
echo "Remove the following files ?"
echo "----------------------------"
find . -name "*.out" -print
echo "----------------------------"
echo "Enter to delete or ctrl-c to exit"
read
find . -name "*.out" -print -delete

