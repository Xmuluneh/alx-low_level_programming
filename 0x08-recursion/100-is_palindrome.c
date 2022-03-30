#include "main.h"
/**
 *_strlen_recursion - checks the string length
 *@s: string
 *Description: firnd string length using recursion
 *Return: string length
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);

	if (s[1] == '\0')
	{
		return (1);
	}
	else
	{
		return (_strlen_recursion(&s[1]) + 1);
	}
}

/**
 *palind - checks palindromity
 *@s: is a string
 *@n: size of string
 *@i: count through string
 *Description: determine if string is palindrome
 *Return: 1 if palindrome 0 if not
 */
int palind(char *s, int n, int i)
{
	if (n <= i)
		return (1);

	if (s[i] != s[n])
		return (0);

	return (palind(s, n - 1, i + 1));
}

/**
 *is_palindrome - checks weither palindrome or not
 *@s: is the string to be checked
 *Description: determines if string is palindrome
 *Return: 1 if it is palindrome 0 if it is not
 */
int is_palindrome(char *s)
{
	return (palind(s, _strlen_recursion(s) - 1, 0));

}
C
xx}
