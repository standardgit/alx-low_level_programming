#include <stdio.h>
#include "main.h"
/**
 * main - entry
 *
 * Return: 0 after run
 */
void print_alphabet_x10(void)
{
  int n, i;
  i = 0;
  while (i < 10)
    for (n = 'a'; n <= 'z'; n++)
    {
      -putchar(n);
      };
      i++;
      putchar('\n');
  }
}
