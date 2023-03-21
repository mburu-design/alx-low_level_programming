#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int prev = 1;
int curr = 2;
int sum = 2;  // start with the sum of the first even term (2)
while (curr <= 4000000) {
int next = prev + curr;
prev = curr;
curr = next;
if (curr % 2 == 0) {
sum += curr;
}
}
printf("%d\n", sum);
return 0;
}
