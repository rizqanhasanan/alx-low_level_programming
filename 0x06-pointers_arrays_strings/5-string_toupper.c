#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *s)
{
int i = 0;
while (s[i])
{
s[i] = toupper(s[i]);
i++;
}
return (s);
}
