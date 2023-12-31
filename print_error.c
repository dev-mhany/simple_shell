#include "shell.h"

/**
 * print_error - prints an error message
 * @info: the parameter & return info struct
 * @estr: string containing specified error type
 * Return: 0 if no numbers in string, converted number otherwise
 *		-1 on error
 *wm
 */
void print_error(info_t *info, char *estr)
{
	_error_puts(info->fname);
	_error_puts(": ");
	print_decimal(info->line_count, STDERR_FILENO);
	_error_puts(": ");
	_error_puts(info->argv[0]);
	_error_puts(": ");
	_error_puts(estr);
}
