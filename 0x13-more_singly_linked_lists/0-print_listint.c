#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_listint - function that print  all the elements of a listint_t list.
 * @h:  pointer to the struct  list_t list.
 *
 * Return: size_t  number of  nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
       size_t count;

       for (count = 0; h != NULL; count++)
       {
	      printf("%i\n", (*h).n);
	      h = (*h.)next;						    }
       return (count);
}
