#include "main.h"
#include <stdio.h>

/**
 * *_memset - fills memory with a constant byte.
 * @b: the address of memory to print
 * @s: the size of the memory to print
 * @n: the size of the characters
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

