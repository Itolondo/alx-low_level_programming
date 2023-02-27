#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: Number to be swapped
 * @b: Number to be swapped
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
