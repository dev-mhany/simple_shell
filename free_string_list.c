#include "shell.h"

/**
 * free_string_list - frees a string of strings
 * @pp: string of strings
 */
void free_string_list(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}
