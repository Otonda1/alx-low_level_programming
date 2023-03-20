#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	char alph;

	alph = 'a';
	while (alph <= 'z')
	{
		putchar (alph);
		alph = alph + 1;
	putchar ('\n');
	return (0);
	}
}
