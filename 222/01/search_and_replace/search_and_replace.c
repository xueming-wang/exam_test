#include <unistd.h>
/*int	ft_strlen(char *c)
{
	int i;
	
	i = 0;
	while (c[i])
		i++;
	return (i);
}*/

int	main(int ac, char **av)
{
	int i;
 	//int j;
	//int k;


	//j = ft_strlen(av[2]);
	//k = ft_strlen(av[3]);	
	//if(ac == 4 && j == 1 && k == 1 )
	i = 0;
	if(ac == 4 && av[2][1] == '\0' && av[3][1] == '\0')
	{
		while (av[1][i])
		{
			if(av[1][i] == av[2][0])
			{
				av[1][i] = av[3][0];
			}
			write (1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
