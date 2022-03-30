#include "main.h"

/**
 * _puts_recursion - Prints a string
 * @s: The string to be printed
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
         int i=;
      if (s[i] != '\0')
      {
           _putchar(s[i]);
          _puts_recursion(&s[i + 1]);
      }
      else
         _putchar('\n');
}

