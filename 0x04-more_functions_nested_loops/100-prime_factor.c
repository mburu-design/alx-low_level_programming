#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
long n = 612852475143;
long i, largest = 0;
while (n % 2 == 0)
{
largest = 2;
n /= 2;
}
for (i = 3; i <= n; i += 2)
{
while (n % i == 0)
{
largest = i;
n /= i;
}
}
printf("%ld\n", largest);
return (0);
}
