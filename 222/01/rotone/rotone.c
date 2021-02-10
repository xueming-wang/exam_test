#include <unistd.h>
/*int	main(int ac, char **av)
{
	int i;
	
	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if ((av[1][i] >= 'a' && av[1][i] < 'z')||
			(av[1][i] >= 'A' && av[1][i] < 'Z'))
				av[1][i] += 1;
			else if (av[1][i] == 'z' ||  av[1][i] == 'Z')
				av[1][i] -= 25;

		write(1, &av[1][i], 1);
		i++;
		}
	
	}
	write (1, "\n" ,1);
	return (0);
}*/



#include <libc.h>
void	rotone(char *c)
{
	int i;

	i = 0;

	while (c[i])
	{
		if ((c[i] >= 'a' && c[i] < 'z') || (c[i] >= 'A' && c[i] < 'Z'))
		c[i] += 1;

		else if (c[i] == 'z' || c[i] == 'Z')
		c[i] -= 25;

	write (1, &c[i], 1);
	i++;
	}
	write (1, "\n", 1);
}

int main(int ac, char **av)
{
	rotone(av[1]);
}
