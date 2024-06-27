#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - func
 * @n: var
*/
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');
	for (a = 0; a < n; a++)
	{
		if (n != 0)
		{
			for (b = 0; b < a; b++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
