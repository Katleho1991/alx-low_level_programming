#include "main.h"

/**
 * _abs - absolute value of integer
 * @c: number to compute
 * Return: absolute value number or 0
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
