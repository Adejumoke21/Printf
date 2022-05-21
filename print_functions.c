#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_char - writes the character c to stdout
 * @arg: argument
 *
 * Return: 1 On success.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_char(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}
/**
 * print_int - prints an integer.
 * @arg: argument
 * Return: 0
 */
int print_int(va_list arg)
{
unsigned int divisor = 1, i, resp, charPrinted = 0;
int n = va_arg(arg, int);
if (n < 0)
{
	_putchar('-');
	charPrinted++;
	n *= -1;
}
for (i = 0; n / divisor > 9; i++, divisor *= 10)
;
for (; divisor >= 1; n %= divisor, divisor /= 10, charPrinted++)
{
	resp = n / divisor;
	_putchar('0' + resp);
}
return (charPrinted);
}

