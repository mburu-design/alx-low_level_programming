#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse using putchar
 *
 * Return: Always 0
 */
int main(void)
{
    int i;

    for (i = 'z'; i >= 'a'; i--)
        putchar(i);

    putchar('\n');

    return (0);
}
