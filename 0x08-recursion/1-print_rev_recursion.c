#include "main.h"

/**
 * -print_rev_recursion - print a string in revers
 *  @s: the string to reverse
 *
 *  Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if(*s == '\0')
	{
		return;
	}

	s++;
	_print_rev-recursion(s);
	s--;
	_putchar(*s);
}
