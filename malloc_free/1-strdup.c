#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - func
 * @str: pointer
 * Return: pointer
*/
char *_strdup(char *str)
{
	int size = 0;
	char *buf;
	int i, k = 0;

	if (str == NULL)
		return (NULL);
	while (str[k] != '\0')
	{
		size++;
		k++;
	}
	buf = malloc(sizeof(char) * size + 1);
	if (buf == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		buf[i] = str[i];
	return (buf);
}
