#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
long int f1 = 1, f2 = 2, next;
printf("%ld, %ld", f1, f2);
for (i = 2; i < 50; i++)
{
next = f1 + f2;
printf(", %ld", next);
f1 = f2;
f2 = next;
}
printf("\n");
return (0);
}
