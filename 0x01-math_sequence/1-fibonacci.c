/*
* 1-fibonacci.c - prints fibonacci secuence
* Author: Rodrigo Zárate Algecira
* Date: August 06, 2021
*/

#include "fibonacci.h"

/**
* Fibonnaci - fibonacci
* Return: void
*/

t_cell *Fibonnaci()
{
/* first two numbers in sequence are 1 and 1 */
/* Like a seed */
/* then add the two numbers to get the next */
/* put a limit by the gold number */
double goldn = 1.618034;
double togold = 0;
t_cell *prevnode;
t_cell *preprevnode;
t_cell *tempnode;

	t_cell fibon = {1, NULL};
printf("here 7");
preprevnode = &fibon;
printf("here 8");
tempnode = malloc(sizeof(t_cell));
	if (tempnode == NULL)
		free(tempnode);
tempnode->elt = 1;
printf("here 8.5");
tempnode->next = preprevnode;
printf("here 9");
preprevnode = tempnode;
printf("here 10");
/* prevnode = preprevnode->next; */

printf("here 3");
/* check if is gold */
	while (togold != goldn)
	{
		tempnode = malloc(sizeof(t_cell));
			if (tempnode == NULL)
				free(tempnode);
printf("here 11");
		tempnode->elt = preprevnode->elt + preprevnode->next->elt;
		printf("%d ", tempnode->elt); 
	/* advance nodes */
	preprevnode = preprevnode->next;
printf("here 12");
	prevnode = preprevnode->next->next;
printf("here 13");
	togold = preprevnode->next->elt / preprevnode->elt;
	printf("togold %lf\n", togold);
	}


return (preprevnode);
}

/**
* gold_number - calculate gold number from fibonacci numbers
* @head: list
* Return: void
*/
double gold_number(t_cell *head)
{
double thegold = 1.456;
t_cell *a = head;
a = NULL;
/* receive a SLL divide the last number with the previous */
/* Thats it */
return (thegold);
}
