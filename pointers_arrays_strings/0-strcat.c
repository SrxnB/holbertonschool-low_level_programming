#include "main.h"
#include <stdio.h>
/**
 * _strcat - a function that concatenates two strings
 * @dest: This is destination
 * @src: This is the source
 *
 * Return: This returns copy
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (j = 0; *(dest + j) != 0; j++)
	{
	}
	for (i = 0; *(src + i) != 0; i++, j++)
	{
		*(dest + j) = *(src + i);
	}
	*(dest + j) = 0;
	return (dest);
}
