/*
* 1-fibonacci.c - prints fibonacci secuence
* Author: Rodrigo Zárate Algecira
* Date: August 06, 2021
*/

/**
* Fibonnaci - Struct fibonacci
* Return: void
*/

t_cell *Fibonnaci()
{
/* first two numbers in sequence are 1 and 1 */
/* Like a seed */
/* then add the two numbers to get the next */
/* put a limit by the gold number */
double goldn = 1.618034;
int init = 2;
int pass = 0;
double togold = 0;
t_cell *prevnode = NULL;
t_cell *preprevnode;
t_cell *tempnode;

tempnode = *prevnode;

/* check if is gold */
	while (togold != goldn)
	{
		if (tempnode == NULL)
		{
		printf("tempnode is NULL\n");
		tempnode = malloc(sizeof(t_cell));
		/* malloc goes wrong */
			if (tempnode == NULL)
				free(tempnode);

		tempnode->elt = 1
		tempnode->next = NULL;

		}
		else
		{
		printf("tempnode is NOT NULL\n"); 
		tempnode = malloc(sizeof(t_cell));
			if (tempnode == NULL)
				free(tempnode);

			if (togold = 0)
			{
			tempnode->elt = 1;
			tempnode->next = *prevnode;
			/* never comeback */
			togold = 1;
			}
			else
			{
			tempnode->elt = prevnode->elt +;

			}
		}
	}


return (tempnode);
}

/**
* gold_number - calculate gold number from fibonacci numbers
* @head: list
* Return: void
*/
double gold_number(t_cell *head)
{
/* receive a SLL divide the last number with the previous */
/* Thats it */
}
