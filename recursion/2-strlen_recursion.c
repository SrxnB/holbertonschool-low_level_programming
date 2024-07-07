#include "main.h"
/**
 * _strlen_recursion - string length
 * @s: string
 *
 * Return: no return
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
		return (0);
}
