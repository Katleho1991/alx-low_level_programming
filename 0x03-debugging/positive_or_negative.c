#include "main.h"

/**
 * positive_or_negative - determine if the number is an integer
 * @i: input parameter
 * Return: always 0
 */

void positive_or_negative(int i)
{
if (i < 0)
{
printf("%d is %s\n", i, "negative");
}
else if (i > 0)
{
printf("%d is %s\n", i, "positive");
}
else
{
printf("%d is %s\n", i, "zero");
}
return (0);
}
