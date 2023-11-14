#include "shell.h"

/**
 * _free_buffer - frees a pointer and NULLs the address
 * @ptr: address of the pointer to free
 *
 *wm 
 * Return: 1 if freed, otherwise 0.
 */
int _free_buffer(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
