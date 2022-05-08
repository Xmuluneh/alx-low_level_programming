#include "main.h"

/**
 * print_alphabet - prints lower case alphabet
 *
 **/

void print_alphabet(void)
{

	char lower_case_letter = 'a';

	while (lower_case_letter <= 'z')
	{
		_putchar(lower_case_letter);
		lower_case_letter++;
	}
	_putchar('\n');
}
