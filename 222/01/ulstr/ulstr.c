#include <unistd.h>

void	putstr(char *str)
{
	while(*str)
		write(1, str++, 1);
	
}

int 	main(int ac, char **av)
{
	char *tmp;

	tmp = av[1];
	while (*av[1])
	{
		if (*av[1] >= 'a' && *av[1] <= 'z')
			*av[1] = *av[1] - 32;
		else if (*av[1] >= 'A' && *av[1] <= 'Z')
			*av[1] = *av[1] + 32;			
		
		av[1]++;
	}
	
	putstr(tmp);
	write (1, "\n", 1);
	return 0;
}
