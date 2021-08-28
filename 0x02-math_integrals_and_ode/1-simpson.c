/*
* 1-simpson.c - simpson method
* Author: Rodrigo Zárate Algecira
* Date: August 21, 2021
*/

/**
* rectangle_method - rectangle_method
* @a: double
* @b: double
* @steps: int
* Return: double
*/

double simpson(double a, double b, int steps)
{
double sum;
int i;

sum = 0.0;
width = (b - a) / steps;
/* aprox */
/* dx / 1 + x^2 */
/* 1-4-1 */
/* check that steps is even */
	if (steps % 10 == 0)
	{
		/* continue */
	}
	else
	{
		/* wrong param */
		printf("Given steps are not even\n");
		exit(2);
	}


for (i = 1; i <= steps; i++)
{
/* height = simpson rules */
area = width * height;
sum += area;
}
return (sum);
}
