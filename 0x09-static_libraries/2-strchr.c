#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates first occurrence of a
 *		character in a string
 *
 * @s: string in question
 * @c: character being located
 * Return: s
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
