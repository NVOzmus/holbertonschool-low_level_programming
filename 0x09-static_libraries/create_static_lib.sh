#!/bin/bash
gcc -c -Werror -Wall -Wextra -pedantic *.c
ar -rc liball.a *.o
