/*
* 0-rectangle.c - rectangle_method
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

double rectangle_method(double a, double b, int steps )
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

int i;
int width = (b - a) / steps;
double sum = 0;

	for (i = 1; i <= steps; i++)
	{
		sum += width * (function(a + (i - 1) * width));
	}

return (sum);
}
