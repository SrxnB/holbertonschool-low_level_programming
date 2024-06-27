#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _puts - func
 * @str: variable
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
