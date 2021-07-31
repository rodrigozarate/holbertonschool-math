#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdarg.h>

/**
* struct complex - Structure
*/

typedef struct complex
{
	double re;
	double im;
} complex;

void display_complex_number(complex c);
complex conjugate(complex c);

#endif
