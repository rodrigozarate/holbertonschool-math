/*
* 1-simpson.c - simpson method
* Author: Rodrigo Zárate Algecira
* Date: August 21, 2021
*/

#define f(x) (1 / (1 + x * x))

/**
* simpson - simpson_method
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
/* 1 - 4 - 1 */
/* 1 - 4 - 2 - 4 - 2 - 1 */
/* check that steps is even */
	if (steps % 2 == 0)
	{
		/* continue */
	}
	else
	{
		/* wrong param */
		printf("Given steps are not even\n");
		exit(2);
	}

/* first term by one */
sum = 1 * f(a) + f(b);
/* sum all except first and last */
	for (i = 1; i <= steps - 1; i++)
	{
		/* height as simpson rules */
		h = a + i * width;
		if (even)
		{
			/* if even */
			sum += 2 * f(h);
		}
		else
		{
			/* if odd */
			sum += 4 * f(h);
		}
	}
/* end term by one */
sum += 1 * f(h);
/* term */
sum = sum * (width / 3);

return (sum);
}
