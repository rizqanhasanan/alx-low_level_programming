#include "main.h"
#include <stdio.h>
/**
 * _isupper - Check if a letter is upper
 * @x: The number to be checked
 *
 * Return: 1 for upper letter or 0 for any else
 */
int _isupper(int )
{
     char c;

     c = 'A';
     printf("%c: %d\n", c, _isupper(c));
     c = 'a';
     printf("%c: %d\n", c, _isupper(c));
     return (0);

}
