#include "main.h"
/**
*print_alphabet fuction
*prints the alphabet
*
*/
void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
print_alphabet();
return (0)
}
