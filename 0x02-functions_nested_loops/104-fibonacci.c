#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
unsigned long int prev1 = 1, prev2 = 2, curr, i;
char buffer[1000] = "1, 2, ";
for (i = 3; i <= 98; i++)
{
curr = prev1 + prev2;
prev1 = prev2;
prev2 = curr;
/* Convert curr to a string and append to buffer */
char curr_str[50];
sprintf(curr_str, "%lu", curr);
strcat(buffer, curr_str);
/* Append ", " unless we've reached the last number */
if (i < 98)
strcat(buffer, ", ");
}
/* Print the result */
printf("%s\n", buffer);
return (0);
}
