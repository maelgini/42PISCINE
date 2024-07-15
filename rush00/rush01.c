void	ft_putchar(char c);

void	ft_print_line(char left, char middle, char right, int size)
{
	ft_putchar(left);
	while (size-- > 2)
		ft_putchar(middle);
	if (size == 1)
		ft_putchar(right);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
		return ;
	ft_print_line('A', 'B', 'C', x);
	while (y-- > 2)
		ft_print_line('B', ' ', 'B', x);
	if (y == 1)
		ft_print_line('A', 'B', 'C', x);
}
