#!/bin/bash
gcc -Werror -Wextra -Wall -pedantic -fPIC -c *.c
gcc -Werror -Wextra -Wall -pedantic -shared -o liball.so *.o
