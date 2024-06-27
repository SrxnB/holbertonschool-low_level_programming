#include "main.h"
#include <stdio.h>
/**
 * _isupper - func
 * @c: varable
 * Return: zero
*/
int _isupper(int c)
{
	char a;

	for (a = 'A'; a <= 'Z'; a++)
	{
		if (c == a)
		{
			return (1);
		}
	}
	return (0);
}
