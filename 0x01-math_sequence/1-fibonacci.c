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
double goldn = 1.618034;
double togold = 2;
int mflag = 1;
double oper;
double diff = 0.000001;
t_cell *prevnode;
t_cell *preprevnode;
t_cell *tempnode;
t_cell *fibon;

fibon = malloc(sizeof(t_cell));
	if (fibon == NULL)
		free(fibon);
fibon->elt = 1;
fibon->next = NULL;

preprevnode = fibon;
prevnode = fibon;
tempnode = malloc(sizeof(t_cell));
	if (tempnode == NULL)
		free(tempnode);
tempnode->elt = 1;
tempnode->next = preprevnode;
/* assign new head */
preprevnode = tempnode;

/* check if is gold */
	while (mflag)
	{
		printf("ladif: %lf diff: %lf\n", (togold - goldn), diff);

		tempnode = malloc(sizeof(t_cell));
			if (tempnode == NULL)
				free(tempnode);
		/* math */
		tempnode->elt = preprevnode->elt + prevnode->elt;

		/* assign nodes */
		tempnode->next = preprevnode;

		/* magic */
		prevnode = preprevnode;
		preprevnode = tempnode;

		togold = (double) preprevnode->elt / prevnode->elt;
	
		/* more magic */
		if (togold > goldn)
		{
			oper = togold - goldn;
		}
		else
		{
			oper = goldn - togold;
		}
		
		printf("oper %lf\n", oper);
		if (oper <= diff)
		{
			mflag = 0;
		}
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
double thegold = 1.618034;
t_cell *a = head;
a = NULL;
/* receive a SLL divide the last number with the previous */
/* Thats it */
return (thegold);
}
