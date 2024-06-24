#include <stdio.h>

/**
 * main - program prints letter in upper and lower case
 * Return: always zero
 */

int main(void)

{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	{
	if (letter != 'e' && letter != 'q')
	putchar(letter);
	}

	putchar('\n');
	return (0);

}
