#include "main.h"

/**
* _strstr - function locates a substring
* @haystack: first parameter
* @needle: second parameter
* Return: always 0
*/

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *l = haystack;
char *p = needle;

while (*l == *p && *p != '\0')
{
l++;
p++;

}
if (*p == '\0')
return (haystack);
}
return (0);
}
