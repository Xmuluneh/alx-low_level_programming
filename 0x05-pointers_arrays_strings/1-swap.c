#include "main.h"
#include <stdio.h>
/**
 * swap_int - Swap values of the parametr passed
 *
 * @a : The first par.
 *
 * @b : The seconf par.
 *
 */
void swap_int(int *a, int *b)
{
int c;
int d;
c = *a;
d = *b;
*a =d;
*b =c;
}

