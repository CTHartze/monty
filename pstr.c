#include "monty.h"

/**
 * f_pstr - Prints string from the top of the stack,
 * then a new line.
 * @head: refers to stack head
 * @counter: refers to line_number
 * Return: void
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
