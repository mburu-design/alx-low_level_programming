#include "main.h"
/**
 *
 *gets the length of a prefix substring.
 *
 */
char *_strpbrk(char *s, char *accept)
{
char *p;
while (*s != '\0')
{
p = accept;
while (*p != '\0')
{
if (*s == *p)
{
return (s);
}
p++
}
s++;
}
return (NULL);
}
