#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main -function positive
*
* Return: the answer
*/
int main(void)
{
int n;
int r;
isrand(time(0));
n = rand() - RAND_MAX / 2;
r = n % 10;
if (n > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, r);
else if (n == 0)
printf("Last digit of %d is %d and is 0\n", n);
else
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, r);
return (0);
}
