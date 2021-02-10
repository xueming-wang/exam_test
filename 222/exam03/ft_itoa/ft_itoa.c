#include <stdlib.h>
int	ft_count(int n)
{
	int count;

	if (n == 0)
		count = 1;
	else
		count = 0;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
char	*ft_itoa(int nbr)
{
	char *tab;
	int len;
	unsigned int tmp;
	len = ft_count(nbr);	
	if (nbr < 0)
	{	tmp = -nbr;
		len = len + 1;
	}
	else
		tmp = nbr;
	//len = ft_count(nbr);	
	//if (nbr < 0 )
		//len = len + 1;
	if(!(tab  = malloc(sizeof(char)*len + 1)))
		return (NULL);
	tab[len] = '\0';
	while (len--)
	{
		tab[len] = tmp % 10 + '0';
		tmp = tmp / 10;
	}
	if (nbr < 0)
		tab[0] = '-';
	return (tab);	  
}

#include <libc.h>
int main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_itoa(atoi(av[1])));
}
