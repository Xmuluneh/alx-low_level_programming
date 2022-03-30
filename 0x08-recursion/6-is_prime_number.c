#include "main.h"
int _is_prime(int n);

/**
 * is_prime_number - checks if the input integer is a prime number.
 * @n: the integer to be checked
 *
 * Return: 1 if prime, otherwise 0
 */
int is_prime_number(int n)
{
	int r = _is_prime(n);
	if (r==1)
	{
	return (1);
	}
	else
	{
	return (0);
	}
	
}

/**
 * _is_prime - tests for prime
 * @n: number to test
 * @i: the counter
 *
 * Return: 1 if prime, otherwise 0
 */
int _is_prime(int n)
{
	if (n<2)
		return (0);
		int i;
		for (i=2;i<=n/2;i++)
		{
		  if(n %i ==0)
		  {
		  return 0;
		  }
		}
	
		
	return (1);
}

