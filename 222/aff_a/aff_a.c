#include <unistd.h>
#include <stdio.h>
void	aff_a(char *c)
{
	int i;

	i = 0;
	if(!c[i])
	{
		write (1, "a\n", 2);
	} 
	while(c[i])
	{ 
		if(c[i] == 'a')
		{	
			write (1, "a\n", 2);
			break;
		}
		else
		{
			write (1, "\n", 1);
			break;
		}
		i++;
	}
}
int main(int ac, char **av)
{
	if (ac != 2)
		write(1, "a\n", 2);
	if (ac == 2)
		aff_a(av[1]);
	return (0);
		
}

