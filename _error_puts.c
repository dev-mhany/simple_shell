#include "shell.h"

/**
 *_error_puts - prints an input string
 * @str: the string to be printed
 *
 * wm
 * Return: Nothing
 */
void _error_puts(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_error_putchar(str[i]);
		i++;
	}
}
