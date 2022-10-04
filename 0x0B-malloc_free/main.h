#ifndef MAIN_H
#define MAIN_H 
#include <stdio.h>
#include <stdlib.h>

/**
* Filename: main.h
* Author: Osaclay
* Desc: Header file containing prototypes for all functions
* used in the 0x0B. C - malloc, free alx project
*/

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);

#endif
