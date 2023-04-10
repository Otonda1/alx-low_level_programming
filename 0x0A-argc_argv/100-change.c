#include "main.h"

/**
 * main - finds minimal no of coins
 *		for change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 success, non-zero otherwise
 */

int main(int argc, char **argv)
{
	int i = 0, j, k = 0, change;
	int deno[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change < 0)
	{
		printf("0\n");
	}
	else
	{
		while (i < 5)
		{
			j = change / deno[i];
			k = k + j;
			change = change - (j * deno[i]);
			i++;
		}
	printf("%d\n", k);
	}
	return (0);
}




