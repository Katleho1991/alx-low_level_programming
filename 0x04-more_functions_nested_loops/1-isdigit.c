#include "main.h"

/**
 * _isdigit - checks for a digit 0 to 9
 * @c: character being checked
 * Return: 1 if its a digit or 0 otherwise
 */

int _isdigit(int c)

{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
