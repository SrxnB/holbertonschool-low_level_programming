#include "main.h"

/**
 * _strlength - Function to find out the length of the given string
 *
 * @s: string
 *
 * Return: the length of given string
 */

int _strlength(char *s)
{
	unsigned int size = 0;

	if (s == NULL)
	{
		s = "";
	}
	while (s[size] != '\0')
	{
		size++;
	}
	return (size);
}

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: The returned pointer should point to a newly allocated space in
 * memory which contains the contents of s1 followed by the contents of s2
 * and null terminated if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int n;
	char *arr;
	unsigned int k = 0;

	n = _strlength(s1) + _strlength(s2);
	arr = malloc(sizeof(char) * (n + 1));

	if (arr == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != '\0')
		{
			*(arr + k) = *s1;
			s1++;
		}
		else
		{
			*(arr + k) = *s2;
			s2++;
		}
		k++;
	}
	*(arr + k) = '\0';

	return (arr);
}
