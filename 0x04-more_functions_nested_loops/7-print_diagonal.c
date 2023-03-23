#include "main.h"
/**
 * print_diagonal - prints a diagonal line of length n
 * @n: length of the line to print
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
