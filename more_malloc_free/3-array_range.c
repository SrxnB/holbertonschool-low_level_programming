#include "main.h"

/**
 * array_range - Function that creates an array of integers
 *
 * @min: minimum number
 * @max: maximum number
 *
 * Return: pointer to the arr
 */

int *array_range(int min, int max)
{
	int *arr;
	unsigned int len, i;

	if (min > max)
	{
		return (NULL);
	}
	len = max - min;
	arr = (int *)malloc((len + 1) * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
