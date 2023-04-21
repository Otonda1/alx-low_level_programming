#include "variadic_functions.h"

/**
 * print_numbers - prints numbers to stdout
 * @separator: integer separator
 * @n: number of integers
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list prt;
	unsigned int i;

	va_start(prt, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(prt, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(prt);
	printf("\n");
}
