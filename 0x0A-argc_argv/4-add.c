#include "main.h"

/**
 * main - adds positive numbers
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int i, j, sum = 0;
	char *c;

	if (argc < 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		j = strtol(argv[i], &c, 10);
		if (*c)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += j;
		}
	}
	printf("%d\n", sum);
	return (0);
}


