#include "main.h"

/**
 * _islower - Check for the lowercase character
 * @c: character to be checked
 * Return: 1 is a lowercase character or 0 for everything else
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
