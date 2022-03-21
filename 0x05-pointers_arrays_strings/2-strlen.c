#include "main.h"
#include <stdio.h>
/**
 * _strlen -return the length of a string
 *
 * @s :The value to evaluate
 * Return: the length of string
*/
int _strlen(char *s)
{
int l = 0;
while (*s != '\0')
{
s++;
l++;
}
return (l);
}
 
