#include "shell.h"

/**
 * exit_shell - exits the shell
 * @info: Structure containing potential arguments. Used to maintain
 *		  constant function prototype.
 *wm
 *  Return: exits with a given exit status
 *		 (0) if info.argv[0] != "exit"
 */
int exit_shell(info_t *info)
{
	int exitcheck;

	if (info->argv[1]) /* If there is an exit arguement */
	{
		exitcheck = _error_atoi(info->argv[1]);
		if (exitcheck == -1)
		{
			info->status = 2;
			print_error(info, "Illegal number: ");
			_error_puts(info->argv[1]);
			_error_putchar('\n');
			return (1);
		}
		info->err_num = _error_atoi(info->argv[1]);
		return (-2);
	}
	info->err_num = -1;
	return (-2);
}
