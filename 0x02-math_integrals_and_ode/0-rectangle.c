/*
* 0-rectangle.c - rectangle_method
* Author: Rodrigo Zárate Algecira
* Date: August 21, 2021
*/

#include <stdio.h>
#include <math.h>

/**
* rectangle_method - rectangle_method
* @a: double
* @b: double
* @steps: int
* Return: double
*/

double rectangle_method(double a, double b, int steps)
{
/* aprox */
/* b - a / steps = width of rectangle */
/* area of rectangle = width * height */
/* sum of rectangles = aprox of area under curve */
/* height = value of function at the start of the interval */
/* height = f(a) first case */
/* height-n = f(a + (i-1) * width) next cases */
/* area = width * (f(a + (i - 1) * width)) */
/* create a sum of all areas */
/* dx = b - a */
/* 1 + x^2 */
/* atan */

int i;
double width, sum;

/* steps = 5; */
width = (b - a) / steps;
sum = 0.0;

printf("a: %lf \n", a);
printf("b: %lf \n", b);
printf("width: %lf \n", width);

	for (i = 1; i <= steps; i++)
	{
		sum += width * (atan(a + (i - 1) * width));
		/* printf("sum: %lf \n", sum); */
	}

return (sum);
}
