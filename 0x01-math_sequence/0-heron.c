/*
* 0-heron.c
* Author: Rodrigo Zárate Algecira
* Date: August 06, 2021
*/

#include "sequences.h"

/**
* create_node - create node
* Return: node
*/

t_cell *create_node(void)
{
t_cell *newnode;
newnode = malloc(sizeof(t_cell));
if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
newnode->next = NULL;
newnode->elt = 74;
return (newnode);
}

/**
* add_node - add node
* @p: pointer
* @v: double
* Return: node
*/

t_cell *add_node(t_cell **p, double v)
{
t_cell *tempnode;
tempnode = malloc(sizeof(t_cell));

tempnode->elt = v;
	if (p[0]->elt == 74)
	{
		tempnode->next = NULL;
		printf("firstnode\n");
	/*	free(p); */
	}
	else
	{
		tempnode->next = *p;
		printf("others\n");
	}

*p = tempnode;
return (tempnode);
}

/**
* heron - Return Heron secuence
* @v: double
* Return: list
*/
/* receive params */
/* t_cell *heron(double p, double x0) */
t_cell *heron(double v)
{
t_cell *thenode, *list;
double i = 0;
/* double comp = sqr(p); */

/* do the math */

/* create node */
thenode = create_node();

/* iterate over value */
	for (;i < v; v--)
	{
	/* value = 0.5 * (x0 + (p/x0)) */
	/* Populate node list */

		list = add_node(&thenode, v);

	}
/* Return list */
return (list);
}
