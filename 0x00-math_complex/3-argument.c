/*
* 3-argument.c - Modulus of complex
* Author: Rodrigo Zárate Algecira
* Date: July 30, 2021
*/

#include "holberton.h"
#include <math.h>

/**
* modulus - return the modulus
* @c: structure complex
* Return: c
*/

double argument(complex c)
{
double a;
a = atan(c.im / c.re);
return (a);
}
