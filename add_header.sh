#!/bin/bash

# Define the header content
HEADER="#include <sys/types.h>\n#include <linux/types.h>\ntypedef __u32 u32;\ntypedef __u16 u16;\ntypedef __u8 u8;\ntypedef __u64 u64;\ntypedef __u16 __sum16;\n\n"

# Find all .c files in the lib directory and its subdirectories
find lib -type f -name "*.c" | while read -r file; do
    # Check if the header is already present
    if ! grep -q "#include <sys/types.h>" "$file"; then
        # Add the header to the top of the file
        echo -e "$HEADER$(cat "$file")" > "$file"
        echo "Added header to $file"
    else
        echo "Header already present in $file"
    fi
done
