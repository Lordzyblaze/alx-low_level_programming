#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int aai = 0, i;

	while (dest[aai])
	{
		aai++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[aai] = src[i];
		aai++;
	}
	dest[aai] = '\0';
	return (dest);
}
