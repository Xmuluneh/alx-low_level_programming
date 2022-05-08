#include "main.h"
/**
 *_islower - returns 1 if lowercase present
 *@c: is a parameter to bechecked
 *Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	while (c >= 97 && c <= 122)
		return (1);
	return (0);
}

