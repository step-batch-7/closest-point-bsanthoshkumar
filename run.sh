#!/bin/bash

rm -rf *.o
gcc -c *.c
gcc -o executable *.o && ./executable
rm -rf *.o
rm -rf ./executable