#!/bin/bash
gcc *.c -fPIC
gcc *.o -shared -o libholberton.so
