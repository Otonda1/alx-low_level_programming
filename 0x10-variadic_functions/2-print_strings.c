#include "variadic_functions.h"

/**
 * print_strings - prints string, followed
 *		by newline
 * @separator: separator string
 * @n: number of strings
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pr;
	unsigned int i;
	char *ch;

	va_start(pr, n);
	for (i = 0; i < n; i++)
	{
		ch = va_arg(pr, char *);
		if (ch == NULL)
			printf("(nil)");
		else
		{
		printf("%s", ch);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
		}
	}
	va_end(pr);
	printf("\n");
}
