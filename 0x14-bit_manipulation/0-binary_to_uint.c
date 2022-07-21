/*
 * Auth: Adams Adjartey
 * File: 0-binary_to_uint.c
 */

#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num, i;
if (!b || !*b)
return (0);
num = i = 0;
while (b[i])
{
if (b[i] > 49)
return (0);
else if (b[i] == 49)
{
num <<= 1;
num += 1;
}
else
num <<= 1;
i++;
}
return (num);
}

