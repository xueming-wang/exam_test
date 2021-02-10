#include <unistd.h>
void	wdmatch(char *str1, char *str2)
{
	int i;
	int len;

	
	i = 0;
	len = 0;
	while (str1[len])
		len++;
	while (*str2 && i < len)
	{
		if(str1[i]  == *str2++)
			i++;
	
	}
	if ( i == len )
		write (1, str1, len);
		
}

int	main(int ac, char **av)
{
	if(ac == 3)
	{
		wdmatch(av[1], av[2]);
	}
	write(1, "\n", 1);
	return 0;
}
