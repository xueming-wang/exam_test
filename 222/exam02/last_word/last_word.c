#include <unistd.h>

int is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

/*int	main(int argc, char **argv)
{
	int i;
	int space;


	i = 0;
	space = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (is_space(argv[1][i]) == 1 && is_space(argv[1][i + 1]) == 0)
			{
				space = i + 1;
			}
			i++;
		}
		while (argv[1][space] != '\0' && is_space(argv[1][i]) == 0)
		{
			write(1, &argv[1][space], 1);
			space++;
		}
	}
	write(1, "\n", 1);
	return (0);	
}*/

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1])
			av[1]++;
		av[1]--;

		while (is_space(*av[1]) == 1)
		av[1]--;
		while (is_space(*av[1]) == 0)
		av[1]--;
		av[1]++;
		while (*av[1] && is_space(*av[1]) == 0)
		write (1, av[1]++, 1);
	}
	write (1, "\n", 1);
	return (0);
}


