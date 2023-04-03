#include "main.h"
/**
 *copies memory area
 *
 * copies memory area
 *
 * Return: void
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (NULL);
}
