#include <stdio.h>
/**
 * main - entry
 *
*Return: 0 after printing function
*/
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeoff(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n" sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n" sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}



