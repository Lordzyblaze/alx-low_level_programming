#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
int i = 1, j = 0;
char *s;
if (str == NULL)
	return (NULL);
while (str[i])
i++;
s = (char  *) malloc(i *sizeof(char) + 1
if  (s == Null)
return (NULL);
while (j < i)
{
s[j] = s[j];
j++
}
s[j] = '\0'
return (s)
}
}
