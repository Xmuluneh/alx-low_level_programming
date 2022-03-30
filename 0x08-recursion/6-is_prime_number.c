#include "main.h"
/**
 *prime - checks primity
 *@n: is th enumber to be checked
 *@i: n is checked b this value
 *Description: will evaluate weither n is prime or not
 *Return: returns the value
 */
int prime(int n, int i)
{
	if (n % i == 0)
		return (0);

	else if (n >= (i + 1) * (i * 1))
		return (prime(n, i + 1));
	return (1);
}
/**
 *is_prime_number - a function to check prime or not
 *@n: is the number to be checked
 *Description: will evaluate prime or not
 *Return: the final value 1 if it is prime
 *
 *
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (prime(n, 2));
}
