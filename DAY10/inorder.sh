#!/bin/bash

# This script renames folders Day1 to Day10 to have numeric prefixes like 01-Day1, 02-Day2, etc.

for i in {1..10}; do
    # Pad single-digit numbers with 0
    if [ $i -lt 10 ]; then
        prefix="0$i"
    else
        prefix="$i"
    fi
    
    old_folder="Day$i"
    new_folder="${prefix}-Day$i"
    
    # Rename folder if it exists
    if [ -d "$old_folder" ]; then
        git mv "$old_folder" "$new_folder"
        echo "Renamed $old_folder -> $new_folder"
    else
        echo "Folder $old_folder does not exist, skipping."
    fi
done

# Commit the changes
git commit -m "Renamed Day1-Day10 folders with numeric prefixes for correct order"
