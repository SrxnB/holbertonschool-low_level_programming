#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 * @n: first 'n' bytes of s2
 *
 * Return: If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	arr = (char *)malloc((len1 + n + 1) * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		arr[i] = s1[i];
	}
	for (i = 0; i < n && s2[i] != '\0'; i++)
	{
		arr[len1 + i] = s2[i];
	}
	arr[len1 + i] = '\0';
	return (arr);
}
