#include <unistd.h>
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		//while(av[1][i] && (av[1][i] == ' '|| av[1][i] == '\t'))			
		//	i++;
			
			while  (av[1][i] == ' '|| av[1][i] == '\t')
			{
				i++;
			}
			//if  (av[1][i] != ' ' &&  av[1][i] != '\t')
				//break		
		
		while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
		{
			ft_putchar(av[1][i]);
			i++;
		}

	}
	write (1, "\n", 1);
	return (0);
		
}
