#include "main.h"

/**
 * print_sign - sign of number printed
 * @n: number to check
 * Return: 1 for positive, -1 for negative number or zero for anything else
 */

int print_sign(int n)

{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
