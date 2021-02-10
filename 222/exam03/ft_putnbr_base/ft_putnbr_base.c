#include <unistd.h>
void	ft_putchar(char c)
{
	write (1, &c, 1);
}
int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i]!= '\0')
		i++;
	return i;
}
int	check_base(char *base)
{
	int i;
	int j;

	i = 0;
	j = i + 1;
	if (!*base || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
			return (0);
		while (base[j])
		{
			if(base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}	
	return (1);
}
void	ft_putnbr_base(int nb, char *base)
{
	long nbr;
	int len;
	
	nbr = nb;
	len = ft_strlen(base);
	if (!(check_base(base)))
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
		
	}
	if (nbr >= len)
	{
		ft_putnbr_base(nbr / len, base);
		ft_putnbr_base(nbr % len, base);
	}
	else 
		ft_putchar(base[nbr]);
	
}

#include <libc.h>
int main()
{
	char *base = "0123456789";;
	int nbr = 222;
ft_putnbr_base(222, base);
}
