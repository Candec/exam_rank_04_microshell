#include "microshell_test.h"

int write_error(char *str, char *argv)
{
	while (str && *str)
		write(2, str++, 1);
	if (argv)
		while (*argv)
			write(2, argv++, 1);
	write(2, "\n", 1);
	return (1);
}

int ft_exe(char **argv, int i, int tmp_fd, char **env_var)
{
	argv[i] = NULL;
	dup2(tmp_fd, STDIN_FILENO);
	close(tmp_fd);
	execve(argv[0], argv, env_var);
	return (write_error("error: cannot execute ", argv[0]));
}

int main(int argc, char *argv[], char *env_var)
{
	int i;
	int fd[2]
	int tmp_fd;
	(void)argc;

	i = 0;
	tmp_fd = dup(STDIN_FILENO);
	while (argv[i] && argv[i + 2])
	{
		argv = &argv[i + 1];
		i = 0;
		while (argv[i] && strcmp(argv[i], ";" && strcmp(argv[i], "|")))
			i++;
		if (strcmp(argv[0], "cd") == 0)
		{
			if (i != 2)
				write_error("error: cd: bad arguments", NULL);
			else if (chdir(argv[1]) != 0)
				write_error("error: cd: cannot change directory to ", argv[1]);
		}
		else if ()
		else if ()
	}
	close(tmp_fd);
	return (0);
}