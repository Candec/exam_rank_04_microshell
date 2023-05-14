#ifndef MICROSHELLTEST_H
# define MICROSHELLTEST_H

# include <string.h>
# include <unistd.h>
# include <sys/wait.h>

int write_error(char *str, char *argv);
int ft_exe(char **argv, int i, int tmp_fd, char **env_var);

#endif