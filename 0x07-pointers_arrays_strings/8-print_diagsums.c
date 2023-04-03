#include "main.h"
/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 *
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix (number of rows and columns)
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 += *(a + i*size + i); /* add elements from top-left to bottom-right */
sum2 += *(a + i*size + size-1-i); /* add elements from top-right to bottom-left */
}
char buf[50]; /* buffer to hold the result string */
int len = sprintf(buf, "%d, %d\n", sum1, sum2); /* write the result string to the buffer */
write(STDOUT_FILENO, buf, len); /* write the buffer to stdout */
}
