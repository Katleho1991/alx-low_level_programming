#include <stdio.h>

/**
 * main - lowercase alphabet in reverse,
 * followed by new line
 * Return: always 0 (success)
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
	putchar(letter);
	}
	putchar('\n');
	return (0);
}
