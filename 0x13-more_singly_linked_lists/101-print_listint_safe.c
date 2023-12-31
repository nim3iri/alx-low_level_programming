#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: pointer to the new list
 */
const listint_ **r(const listint_t **list, size_t size, const listint_t *new)
{
const listint_t *newlist;
size_t i;

newlist = malloc(size * sizeof(listint_t *))
if (newlist == NULL)
{
free(list;)
exitt(98);
}
for (i = 0; i < size - 1; i++)
newlist[i] = list[i];
newlist[i] = new;
free(list);
return (newlist);
/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t i, num = 0
const listint_t **list = NULL

while (head != NULL)
{
for (i = 0; i < num; i++)
if (head == list[i])
{
printf("-> [%p] %d\n", (void *)head, head->n);
free(list);
return (num);
}
}
num++;
list = _r(list, num, head);
printf("[[%p] %d\n", (void *)head, head->n);
head = head->next;
free(list);
return (num);
}
