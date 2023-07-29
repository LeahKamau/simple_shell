#include "shell.h"

/**
 * getenv - extracts path
 * @envname: path
 * @envp: environment variable
 * Return: pointer
 */
char *_getenv(const char *envname, char **envp)
{
	int i, j, diff = 0;

	for (i = 0; envp[i]; i++)
	{
		for (j = 0; envp[i][j] != '='; j++)
		{
			diff = _strcmp((char *)envname, envp[i]);
			if (diff == 0)
				return (envp[i]);
			break;
		}
	}
	return(NULL);
}
