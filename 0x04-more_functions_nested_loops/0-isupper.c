#include "main.h"

/**
 * _isupper - checks lowercase character
 * @c: character checked
 * Return: 1 for uppercase character or 0 for anything else
 */

int _isupper(int c)

{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
