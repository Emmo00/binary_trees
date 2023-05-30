#!/bin/env bash
# compile all files passed as arguments to an executable called app
# automatically adds binary_tree_print.c
gcc -Wall -Wextra -Werror -pedantic -o app $@ binary_tree_print.c
