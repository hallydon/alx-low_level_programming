#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc libball.a *.o
ranlib liball.a
