#include <unistd.h>
#include "ft.h"

int	main(int ac, char **av)
{
	if (ac < 2)
		ft_putstr("File name missing.", STDERR_FILENO);
	else if (ac > 2)
		ft_putstr("Too many arguments.", STDERR_FILENO);
	else
		ft_putstr()
	
}