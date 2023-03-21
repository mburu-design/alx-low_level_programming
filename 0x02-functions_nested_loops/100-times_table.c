#include "main.h"
/**
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * print_times_table - prints the n times table, starting with 0
 * @n: the maximum multiplier
 */
void print_times_table(int n)
{
int i, j, result, tens, ones;
if (n < 0 || n > 15)
{
return;
}
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
result = i * j;
if (j == 0)
{
_putchar(result + '0');
}
else
{
_putchar(',');
_putchar(' ');
tens = result / 10;
ones = result % 10;
if (tens > 0)
{
_putchar(tens + '0');
}
else
{
_putchar(' ');
}
_putchar(ones + '0');
}
}
_putchar('\n');
}
}
