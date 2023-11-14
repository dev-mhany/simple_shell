#include "shell.h"

/**
 * free_info - frees info_t struct fields
 * @info: struct address
 * wm
 * @all: true if freeing all fields
 */
void free_info(info_t *info, int all)
{
	free_string_list(info->argv);
	info->argv = NULL;
	info->path = NULL;
	if (all)
	{
		if (!info->cmd_buf)
			free(info->arg);
		if (info->env)
			free_list(&(info->env));
		if (info->alias)
			free_list(&(info->alias));
		free_string_list(info->environ);
			info->environ = NULL;
		_free_buffer((void **)info->cmd_buf);
		if (info->readfd > 2)
			close(info->readfd);
		_putchar(BUF_FLUSH);
	}
}
