#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: base
 * @y: exponent
 *
 * Return: result of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);

int result = 1;

while (y > 0)
{
result *= x;
y--;
}

return (result);
}
