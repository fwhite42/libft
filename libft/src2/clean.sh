#!/bin/bash

# Loop through all .c files in the current directory
for file in *.c; do
    if [ -f "$file" ]; then
        # Temporarily remove comments at the beginning of each file
        sed -i -e '/^[[:space:]]*\/\//d' -e '/^[[:space:]]*\/\*.*\*\//d' -e '/^[[:space:]]*\/\*/{:a;N;/\*\//!ba;s/\/\*.*\*\///}' "$file"
        echo "Comments removed from $file"
    fi
done

