#include "shell.h"

/**
 * main - entry point
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
	info_t info[] = {INFO_INIT};
	int fp;

	if (argc == 2)
	{
		fp = open(argv[1], O_RDONLY);
		if (fp == -1)
		{
			if (errno == EACCES)
				exit(126);
			if (errno == ENOENT)
			{
				_error_puts(argv[0]);
				_error_puts(": 0: Can't open ");
				_error_puts(argv[1]);
				_error_putchar('\n');
				_error_putchar(BUF_FLUSH);
				exit(127);
			}
			return (EXIT_FAILURE);
		}
		info->readfd = fp;
	}
	populate_env_list(info);
	hsh(info, argv);
	return (EXIT_SUCCESS);
}

