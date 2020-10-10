#!/bin/bash
gcc -Werror -Wextra -Wall -pedantic -c *.c
ar -rc libholberton.a *.o
