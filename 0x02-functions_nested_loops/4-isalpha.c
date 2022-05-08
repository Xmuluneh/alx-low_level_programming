#include "main.h"
/**
 *_isalpha - returns 1 if alphabet, 0 otherwise
 *@c: which is inside the pharentesis
 *Return: if letter is present 1, otherwise 0
 */
int _isalpha(int c)
{
	while (c >= 65 && c <= 90)
		return (1);
	while (c >= 97 && c <= 122)
		return (1);
	return (0);
}

