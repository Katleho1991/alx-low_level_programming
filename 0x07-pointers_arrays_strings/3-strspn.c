#include "main.h"

/**
 * _strspn - function gets length prefix substring
 * @s: first parameter
 * @accept: second parameter
 * Return: number of characters counted
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; s[i] != accept[k]; k++)
		{
			if (accept[k] == '\0')
				return (i);
		}
	}
	return (0);
}
