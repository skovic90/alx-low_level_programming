#include "main.h"

/**
 * _puts_recursion - prnts string
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (*s !=  '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\0');
}
