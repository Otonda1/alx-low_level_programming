#include "main.h"
/**
 * _abs - prints the absolute value of an integer.
 * @n: the input as an integer
 * Return: 0 (success)
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
