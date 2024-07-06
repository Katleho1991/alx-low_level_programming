#include "main.h"
#include <stdio.h>

/**
* rot13 - main function encoding rot13
* @s: string parameter
* Return: string function
*/

char *rot13(char *s)
{
int k, r;
char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char data2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (k = 0; s[k] != '\0'; k++)
{
for (r = 0; r < 52; r++)
{
if (s[k] == data1[r])
{
s[k] = data2rot[r];
break;
}
}
}
return (s);
}
