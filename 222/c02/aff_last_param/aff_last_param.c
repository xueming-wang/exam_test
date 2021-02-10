#include <unistd.h>

void	putstr(char *c)
{
	while(*c)
	{
		write(1, c++, 1);
	}
}

int	main(int ac, char **av)
{



	if (ac < 2)
		write (1, "\n", 1);
	if (ac > 1)
	{
		putstr(av[ac-1]);
		write (1, "\n", 1);
	}
}

/*#include <unistd.h>

int		main(int ac, char **av)
{
	if (ac > 1)
		while (*av[ac - 1])
			write(1, av[ac - 1]++, 1);
	write(1, "\n", 1);
	return (0);
}*/

