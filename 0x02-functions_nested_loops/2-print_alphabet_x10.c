#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet_x10();
    return (0);

}

/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
char letter;
int i;

for (i = 0; i < 10; i++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
}
