#include "main.h"

/**
 * print_line - draws a line in the terminal
 * @n: number of times
 * Return: always 0
 */

void print_line(int n)
{
int i;

for (i = 0; i < n; i++)

{
_putchar('_');
}
_putchar('\n');
}
