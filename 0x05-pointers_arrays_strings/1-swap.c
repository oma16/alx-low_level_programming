#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap two integers
 * @a : input
 * @b : input
 * Description: swap two integers
 * Return: a and b
 */
void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
