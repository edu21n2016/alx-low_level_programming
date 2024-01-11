#include "main.h"

/**
 * _puts_recursion -print a string followed by a new line
 * @s: the string to print
 *
 * Return: NOthing.
 */
void _puts_recursion(char *s){

	if(*S == '\0')
         {
		 _putchar('\n');
		 return;
	}

	_putchar(*s);
	s++;
	-puts_recursion(s);

