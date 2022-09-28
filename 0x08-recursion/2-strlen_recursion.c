#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: An input string to printing
 * Return: The length of the string
 */

int _strlen_recursion(char *s);
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
