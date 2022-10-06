#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/**
* Filename: main.h
* Author: Osaclay
* Desc: Header file containing prototypes for all functions
* used in the 0x0C. C - More malloc, free alx project
*/

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif
