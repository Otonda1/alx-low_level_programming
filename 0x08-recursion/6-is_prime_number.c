#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 *
 * @n: input integer
 *
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (if_prime(n, 2));
}

/**
 * if_prime - checks whether a given int is prime
 *
 * @i: input integer
 * @j: divisor guesses
 * Return: 1 if prime, 0 otherwise
 */

int if_prime(int i, int j)
{
	if (i % j == 0)
		return (0);
	else if (j * j > i)
		return (1);
	return (if_prime(i, j + 1));
}
