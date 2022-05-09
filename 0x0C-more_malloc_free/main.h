#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

char _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void mul(int *product, char *n1, char *n2, int len1, int len2);

#endif /* MAIN_H */
