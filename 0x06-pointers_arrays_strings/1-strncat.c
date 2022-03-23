#include "main.h"
#include <string.h>
/**
 * _strncat -Appends not more than n character from the string
 * pointed to by src to the end of the string pointed to by dest
 * plus a terminating Null-chracter
 *
 *
 *
 *
 *
 *
 * Return : dest
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}

