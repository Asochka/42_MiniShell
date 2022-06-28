#include "../includes/minishell.h"

void	handler(int code)
{
	if (code == SIGINT)
		ft_putstr_fd("\b\b\ni'm dead bro > ", 2);
	else if (code == SIGQUIT)
		ft_putstr_fd("\b\b", 1);
}
