/*
* 2-mandelbrot.c - Prints a mandelbrot
* Author: Rodrigo Zárate Algecira
* Date: August 06, 2021
*/

#include <stdio.h>

/* the circle inside the coords x,y (-2,2) (2,2) (-2,-2) (2,-2) */
/* (A+Bi)^2 */
/* (A+Bi)(A+Bi) = (AA)+(AB)i+(AB)i-BB */
/* (AA-BB)+(2AB)i */

/**
* mandelbrot - do the mandel bro
*/

int mandelbrot(void)
{
/* create the secuence */
/* limits */
int A, B, i, z = 100;
int w, h;
double a, b, x, y, r;
/* size of image by 4 */
double n = 99.9;
w = z * 4, h = z * 4;
printf("Holberton School\n");
printf("Mandelbrot's set image created in mandelbrot.pgm file\n");
FILE *pgmimg;
pgmimg = fopen("mandelbrot.pgm", "wb");
fprintf(pgmimg, "P2\n");
fprintf(pgmimg, "%d %d\n", w, h);
fprintf(pgmimg, "255\n");
/* create the array for PGM */
for (B = 0; B <= 4 * n; B++)
{
	/* upper */
	b = 2 - (B / n);
	for (A = 0; A <= 4 * n; A++)
	{
		/* lower */
		a = -2 + (A / n);
		x = 0;
		y = 0;
		/* test cases */
		for (i = 1; i <= 1024; i++)
		{
			r = x;
			x = (x * x) - (y * y) + a;
			y = (2 * r * y) + b;
			/* goes away */
			if ((x * x) + (y * y) > 4)
				break;
		/* future i to scale or color */
		}
		if (i == 1025)
		{
			fprintf(pgmimg, "255 ");
			printf(" ");
		}
		else
		{
			fprintf(pgmimg, "20 ");
			printf(".");
		}
	}
fprintf(pgmimg, "\n");
printf("\n");
}

/* output the PGM file */
fclose(pgmimg);
return (0);
}
