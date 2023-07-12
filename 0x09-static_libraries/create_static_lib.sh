#!/bin/bash
c_files=$(find . -name "*.c")
for c_file in $c_files; do
gcc -c $c_file
done
object_files=$(find . -name "*.o")
ar -rcs liball.a $object_files
