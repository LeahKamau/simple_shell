#include "shell.h"

/**
 * setenv - extracts directories
 * @envp: environment variables
 * Return: string array of path
 */
char **_setenv(char **envp)
{
	char *path = _getenv("PATH", envp);
	char **full_path = _pathenv(path, ":=");
	return (full_path);
}
