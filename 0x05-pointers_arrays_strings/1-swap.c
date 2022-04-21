/**
 * swap_int - swap to int parameter
 *
 * @a: int parameter
 * @b: int parameter
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
int num;

num = *a;
*a = *b;
*b = num;
}
