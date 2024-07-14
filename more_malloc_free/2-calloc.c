#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 *
 * @nmemb: array param
 * @size: number of elements of arr
 *
 * Return: If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int k;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < nmemb * size; k++)
	{
		p[k] = 0;
	}
	return (p);
}
