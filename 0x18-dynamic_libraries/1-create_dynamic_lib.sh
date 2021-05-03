#!/bin/bash
gcc *.c -fPIC
gcc -shared -o libholberton.so *.o
