#!/bin/bash
gcc -fpic -c *.c
gcc -share *.o -o libll.so
