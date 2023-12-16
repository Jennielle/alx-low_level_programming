#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -o -fPIC *.c
gec -shared -o liball.so *. o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
