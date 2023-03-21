#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
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
#endif /* MAIN_H */
