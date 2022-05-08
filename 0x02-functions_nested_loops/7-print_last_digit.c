#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @digit: parameter of innteger
 * Return: the last digit
 */
int print_last_digit(int digit)
{
	digit = digit % 10;

	if (digit < 0)
	{
		digit = -digit;
	}
	_putchar(digit + '0');
	return (digit);
}

