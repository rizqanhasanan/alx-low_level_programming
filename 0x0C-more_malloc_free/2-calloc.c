#include "MAIN.h"
#include <stdlib.h>

/**
 * _calloc - ...
 * @nmemb: number of members
 * @size: size
 *
 * Return: ...
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int i = 0, l = 0;
char *p;
l = nmemb * size;
p = malloc(l);
if (p == NULL)
return (NULL);
while (i < l)
{
p[i] = 0;
i++;
}
return (p);
}
