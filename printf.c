#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _printf - produces output according to a format.
 * @format: pointer to format to be used for the output cases.
 * Return: the number of characters printed
 *	(excluding the null byte used to end output to strings).
 */
int _printf(const char *format, ...)
{
	/**
	* to display the characters.
	*/
	int i;

	for (i = 0; format[i] != '\0'; i++)
	{
		_putchar(format[i]);
	}

	return (0);
}
