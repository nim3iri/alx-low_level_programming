#include "lists.h"

/**
 * listint_len - prints a linked list
 * @h: pointer to first node
 *
 * Return: size of list
 */
size_t listint_len(const listint_t *h)
{
size_t i = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
