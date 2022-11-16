#include "shell.h"

/**
 *_strlen - string lent
 *@str: The string
 *
 *Return: always 0 on success
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}
