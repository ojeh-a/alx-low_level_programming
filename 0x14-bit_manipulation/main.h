#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);

#endif
