#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - length of string
 * @s: variable
 * Return: integer
 */
int _strlen(char *s)
{
	char *p = s;

	while (*p != '\0')
		p++;
	return (p - s);
}
