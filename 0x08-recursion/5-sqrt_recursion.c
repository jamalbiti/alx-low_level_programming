#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: int
 *
 * Return: int square root.
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (square_root(n, 0, n));
}

/**
 * square_root - returns the natural square root
 * of a number using binary search.
 *
 * @n: int
 * @low: int
 * @high: int
 *
 * Return: int square root.
 */
int square_root(int n, int low, int high)
{
if (low > high)
return (-1);

int mid = low + (high - low) / 2;
int square = mid * mid;

if (square == n)
return (mid);
else if (square < n)
return (square_root(n, mid + 1, high));
else
return (square_root(n, low, mid - 1));
}
