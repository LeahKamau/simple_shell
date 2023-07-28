#include "shell.h"

/**
 * line_getter - reads line from stdin
 *
 * Return: pointer to line read
 */
char *line_getter(void)
{
	char *command = NULL;
	size_t bufSize = 0;
	ssize_t chars_read = 0;

	chars_read = getline(&command, &bufSize, stdin);

	if (chars_read == -1)
	{
		write(1, "\n", 1);
		exit(0);
	}

	if (command[chars_read - 1] == '\n')
		command[chars_read - 1] = '\0';

	return (command);
}
