#include "main.h"
/**
 * _realloc - realloc old ptr to new
 * @ptr: old one
 * @old_size: old size of pointer
 * @new_size: new size of pointer
 * Return: void *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
char *willpointer;

if (old_size == new_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
willpointer = malloc(sizeof(char) * new_size);
if (willpointer == NULL)
return (NULL);
if (ptr)
{
for (i = 0; i < old_size; i++)
{
willpointer[i] = *((char *)ptr + i);
}
}
free(ptr);
return (willpointer);
}
