#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - func
 * Return: zero
*/
void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a == '2' || a == '4')
			continue;
		_putchar(a);
	}
	_putchar('\n');
}
