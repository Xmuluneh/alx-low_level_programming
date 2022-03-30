#include "main.h"
#include <string.h>
/**
 * is_palindrome - checks if a string is a palindrome or not.
 * @s: the string to scan
 *
 * Return: 1 if palindrome, else 0 assuming "" is palindrome.
 */
int is_palindrome(char *s)
{
	if (!s)
		return (1);
	return (check_if_palindrome(s, 0, strlen(s)));
}

/

/**
 * check_if_palindrome - check if string is a palindrome
 * @s: the string to be checked
 * @i: index
 * @len: the length of the s
 *
 * Return: 1 if palindrome,  else 0.
 */
int check_if_palindrome(char *s, int i, int len)
{
	if (len == i)
	{
		return (1);
	}
	else if(s[i] != s[len])
	{

	     return (0);
	}
	else
	{
	    return (check_if_palindrome(s, i + 1, len-1));
	}
}

