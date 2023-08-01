#!/bin/bash

# Check if the user provided a filename as an argument
if [ $# -eq 0 ]; then
  echo "Usage: $0 <filename>"
  exit 1
fi

# Get the filename and extract the prefix number
filename="$1"
prefix="${filename%%-*}"

# Set the main file path based on the prefix number
main_file="testfiles/${prefix}-main.c"

# Check if the main file exists
if [ ! -f "$main_file" ]; then
  echo "Error: Main file '$main_file' not found!"
  exit 1
fi

# Compile the files with the given filename and generate output based on the filename
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c "$main_file" "$filename" 0-binary_tree_node.c -o "$prefix-node"
