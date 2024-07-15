#include <fcntl.h>
#include <unistd.h>


int	ft_display_file(char *path)
{
	char	buf[2048];
	int		len;
	int		fd;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (-1);
	len = read(fd, buf, 2048);
	while (len > 0)
		write(1, buf, len);
	close(fd);
	return (0);
}
