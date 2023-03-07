#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - check the code for Holberton School students.
 * @s: The array to be searched
 * @accept: Target bytes from searching
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = start;
		s++;
	}
	return (NULL);
}
