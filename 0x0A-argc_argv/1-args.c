#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * @argc: int parameter
 * @argv: char parameter
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
int i;
i = argc - 1;
printf("%d\n", i);
return (0);
}
