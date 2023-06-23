#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -o liball.so *.o
rm *.o
echo "Dynamic library liball.so created successfully."