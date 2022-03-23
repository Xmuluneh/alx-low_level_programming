#include "main.h"
#include <string.h>
/**
 * _stecat -Concatenates teo string together
 * @dest: First string, second string is appended to it
 * @src: Second string , is is apprnded to the first
 * Return : dest
*/
char *_strcat(char *dest, char *src)
{
int i, n, m;

	for (m = 0; dest[m] != '\0'; m++)
	{
	}
	for (n = 0; src[n] != '\0'; n++)
	{
	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
	dest[m + i] = src[i];
	}
	return (dest);

}
 
