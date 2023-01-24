#include "main.h"
/**
  * print_alphabet_x10- prints the alphabet 10x
  *
  * Return ()
  *
  */
void print_alphabet_x10(void)
{
char counter = "a";
int x;

	while (x < 10)
	{
		for (counter = 0; counter < "z"; counter++)

		{
			_putchar(counter);
		}
	_putchar('\n');
	x++;
	}
}
