#include "list.h"
/**
* check_cycle -function that checks if a linked list contains a cycle
* @list: paremeter
*
* Return: 1 if the list has a cycle else 0
*/
int check_cylce(listint_t *list)
{
	listint_t *list1 = list;
	listint_t *list2 = list;
	
	if (!list)
		return (0);
	
	while (list1 && list2 && list2->next)
	{
		list1 = list1->next;
		list2 = list2->next->next;
		
		if (list1 == list2)
			return(1);
	}
	return (0);
}
