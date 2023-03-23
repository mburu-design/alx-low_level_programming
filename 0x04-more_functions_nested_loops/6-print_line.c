#include "main.h"
/**
 * print_line - prints a straight line of length n
 * @n: length of the line to print
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
