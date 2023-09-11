#include "sort.h"

/**
 * list_length - Returns the number of elements in a doubly linked list
 *
 * @list: Head of the list
 *
 * Return: Number of element, else 0.
 */
size_t list_length(listint_t **list)
{
	size_t i = 0;
	listint_t *temp;

	if (list == NULL || (*list) == NULL)
	{
		return (0);
	}

	temp = *list;

	while (temp != NULL)
	{
		temp = temp->next;
		i = i + 1;
	}
	return (i);
}

/**
 * node_swap - Swaps two nodes
 *
 * @list: Doubly linked list
 * @temp1: Node 1 to be swapped
 * @temp2: Node 2 to be swapped
 *
 * Return: Void
 */
void node_swap(listint_t **list, listint_t *temp1, listint_t *temp2)
{
	if (temp1->prev == NULL)
	{
		*list = temp2;
		temp2->prev = NULL;
	}
	else
	{
		temp1->prev->next = temp2;
		temp2->prev = temp1->prev;
	}
	if (temp2->next == NULL)
	{
		temp1->next = NULL;
	}
	else
	{
		temp2->next->prev = temp1;
		temp1->next = temp2->next;
	}
	temp1->prev = temp2;
	temp2->next = temp1;
}

/**
 * insertion_sort_list - Sorts a doubly linked
 * list using insertion sort algorithm
 *
 * @list: Doubly linked list to be sorted
 *
 * Return: Void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp1;
	listint_t *temp2;

	if (list_length(list) < 2)
	{
		return;
	}

	temp1 = *list;

	while (temp1->next != NULL)
	{
		temp2 = temp1->next;
		if (temp1->n > temp2->n)
		{
			node_swap(list, temp1, temp2);
			print_list(*list);
			temp1 = *list;
		}
		else
		{
			temp1 = temp1->next;
		}

	}
}
