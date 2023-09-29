#include "main.h"

/**
 * is_prime_number - checks for prime numbers.
 *
 * @n: int
 *
 * Return: 0 or 1;
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	if (n % 2 == 0 || n % 3 == 0)
		return (0);

	int i = 5;

	while (i * i <= n)
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return (0);
		i += 6;
	}

return (1);
}

