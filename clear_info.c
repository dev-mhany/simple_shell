#include "shell.h"

/**
 *clear_info.c
 * clear_info - initializes info_t struct
 * wm
 * @info: struct address
 */
void clear_info(info_t *info)
{
	info->arg = NULL;
	info->argv = NULL;
	info->path = NULL;
	info->argc = 0;
}
