#include "main.h"

/**
 * binary_to_uint - converts a binary number string to unsigned int
 * @b: the binary number as a string
 *
 * Return: the unsigned int form of b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num = (num << 1) | (b[i] - '0');
	}

	return (num);
}
