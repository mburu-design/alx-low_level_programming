#include "main.h"
/**
 * print_chessboard - Prints a chessboard
 *
 * @a: The chessboard array to print
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
int i, j;
char buf[17]; /* buffer to hold one row of the chessboard as a string */
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
buf[j*2] = a[i][j]; /* put the current character in the buffer */
buf[j*2+1] = ' '; /* put a space after the character in the buffer */
}
buf[15] = '\n'; /* add a newline character at the end of the row */
buf[16] = '\0'; /* add a null terminator at the end of the string */
write(STDOUT_FILENO, buf, 16); /* write the row to stdout */
}
}
