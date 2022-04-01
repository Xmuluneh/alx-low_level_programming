#include <stdio.h>
#include "main.h"
#include <stdlib.h>


/**
 * main - program that adds positive numbers
 *@argc:number of arguments
 *@argv: pointer array
 *Return: ALWAYS 0
 */

int main(int argc, char *argv[])
{
	int a, i, x;

	a = 0;

	for (x = 0; x <= argc; x++)
	{
		a++;
	}
	printf("numero de strings %d\n", a);

/*
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			a = a + atoi((argv[i]));
		}
		printf("%d\n", a);
	}
	else
	{
		printf("0\n");
	}
		return (0);
*/
}

