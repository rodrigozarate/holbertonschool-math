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
printf("ss %lf ss", newnode->elt);
return (newnode);
}

/**
* add_node - add node
* @p: pointer
* @v: double
* Return: node
*/

t_cell *add_node(t_cell *p, double v)
{
t_cell *tempnode;
/* tempnode = create_node(); */
tempnode = p;
printf("%p p node\n", &p);
printf("%p tempnode\n", &tempnode);
tempnode->elt = v;
printf("%lf tempnode\n", tempnode->elt);
tempnode->next = p;
*p = *tempnode;
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
/* double value = 5; */
/* double comp = sqr(p); */

/* do the math */
/* iterate over value */
printf("%f k\n", v);
/* create node */
thenode = create_node();
while (i < v)
{
/* value = 0.5 * (x0 + (p/x0)) */
/* Populate node list */
/* thenode = create_node(); */
printf("%p thenode %lf\n", &thenode, v);
list = add_node(thenode, v);
/* printf("%p list\n", &list); */
v--;
}
/* Return list */
return (list);
}
