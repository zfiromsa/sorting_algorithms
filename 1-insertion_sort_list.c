#include "sort.h"

/**
 * swap - this function spaw node1 to node 3
 *
 * @list: the address of the doublelink list.
 * @node1: the
 * @node2: the
 * Return: nothing
*/
void swap(listint_t **list, listint_t *node1, listint_t *node2);

/***
 * insertion_sort_list - a function that sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm
 *
 * @list: the address of the doublelink list.
 * Return: nothing
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *head, *temp;

	if (!list || !(*list))
		exit(EXIT_FAILURE);
	head = (*list)->next;
	while (head)
	{
		temp = head;
		head = head->next;
		while (temp && temp->prev && temp->n < temp->prev->n)
		{
			swap(list, temp->prev, temp);
			print_list(*list);
		}
	}
}

void swap(listint_t **list, listint_t *node1, listint_t *node2)
{
	node1->next = node2->next;
	if (node2->next != NULL)
		node2->next->prev = node1;
	node2->prev = node1->prev;
	node2->next = node1;
	if (node1->prev != NULL)
		node1->prev->next = node2;
	else
		*list = node2;
	node1->prev = node2;
}

