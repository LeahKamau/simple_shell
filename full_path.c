#include "shell.h"

/**
 * pathenv - pointer to env
 * @path: path pointer
 * @denv: delimeter
 * Return: pointer to every directory
 */
char **_pathenv(char *path, char *denv)
{
	char *dir_token = NULL;
	char **directories =  NULL;
	int dirs_count = cmd_size(path, ':');
	int i = 0;

	directories = malloc(sizeof(char *) * (dirs_count + 2));

	if (!directories)
	{
		free(directories);
		perror("malloc error");
		exit(EXIT_FAILURE);
	}
	dir_token = strtok(path, denv);

	while (dir_token)
	{
		directories[i] = dir_token;
		dir_token = strtok(NULL, denv);
		i++;
	}

	directories[i] = NULL;

	return (directories);
}
