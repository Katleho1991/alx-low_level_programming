#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be considered
 * Return: value of last digit of number
 */

int print_last_digit(int n)

{
	int last;

	last = n % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
