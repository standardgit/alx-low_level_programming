#include <math.h>

/**
 * _pow_recursion - get power of a int
 * @x: int parameter
 * @y: int params
 * Return: int
 */

int _pow_recursion(int x, int y)
{
int i;
i = pow(x, y);
if (i == 0)
{
return (-1);
}

return (i);
}
