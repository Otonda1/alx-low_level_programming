#include <stdarg.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
        va_list arg;
        unsigned int i;

        if (separator == NULL)
                return;
        va_start(arg, n);
        for (i = 0 ; i < n ; i++)
        {
                printf("%d", va_arg(arg, int));
                printf("%s", separator);
        }
        va_end(arg);
        printf("\n");
}

