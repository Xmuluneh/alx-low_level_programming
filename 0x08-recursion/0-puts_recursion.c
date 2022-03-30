#include "main.h"
/**
 *_puts_recursion - will print string using the puts
 *@s: the inputed string to be printed
 *Description: to print a string using recursion
 *Return: nothing since we have a void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(&s[i + 1]);
	}
	else
		_putchar('\n');
}

