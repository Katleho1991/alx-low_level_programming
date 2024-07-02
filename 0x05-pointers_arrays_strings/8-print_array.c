#include "main.h"

/**
 * print_array - the main function
 * @a: the first parameter
 * @n: the second parameter
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
{
	if (i < n - 1)
		printf(", ");
}
	printf("\n");
}
}
