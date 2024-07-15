#include <unistd.h>

void	ft_putstr(char *str, int fd)
{
	write(fd, str, fd);
}
