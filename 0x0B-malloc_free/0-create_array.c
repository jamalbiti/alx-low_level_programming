#include "main.h"
#include <stdlib.h>
/**
 * create_array - fonction who  creat an array of chars
 * @size: siwe of array
 * @c: char to assign
 * Return: to Null  0
 */
char *create_array(unsigned int size, char c)
{

	char *str;
	unsigned int x;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
	return (NULL);

	for (x = 0; x < size; x++)
	str[x] = c;
	return (str);
}
