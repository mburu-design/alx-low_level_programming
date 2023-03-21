#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}
/**
 * print_alphabet
 *
 *prints the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
c_putchar('\n');
}
