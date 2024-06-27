#include "main.h"
#include <stdio.h>
/**
 * swap_int - func
 * @a: point1
 * @b: point2
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
