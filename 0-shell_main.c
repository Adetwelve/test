#include "shell.h"

/**
 * Shell process
 * 	1. prompt <....
 * 	2. input      |
 * 	3. parse      |
 * 	4. execute .....
 *
 */
int main(int argc __attribute__((unused)), char **argv)
{
	char *line;
	char **args;

	(void) argv;

	signal(SIGINT, ctrl_c);

	while (1)
	{
	print(" # ", STDOUT_FILENO);
	line = _getline();
		
		if (line == NULL)
		{
			if (isatty(STDIN_FILENO))
					break;
		}

		args = _strtok(line, DELIM);
		shell_execute(args);
	}
	return (1);
}
