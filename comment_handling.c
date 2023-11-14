#include "shell.h"

/**
 * comment_handling - function replaces first instance of '#' with '\0'
 * @buf: address of the string to modify
 *comment_handling.c
 *
 * Return: Always 0;
 */
void comment_handling(char *buf)
{
	int i;

	for (i = 0; buf[i] != '\0'; i++)
		if (buf[i] == '#' && (!i || buf[i - 1] == ' '))
		{
			buf[i] = '\0';
			break;
		}
}
