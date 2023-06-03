#!/bin/env bash
# compile all files passed as arguments to an executable called app
# automatically adds binary_tree_print.c
# runs the output executable
gcc -Wall -Wextra -Werror -pedantic -o app $@ binary_tree_print.c
./app
