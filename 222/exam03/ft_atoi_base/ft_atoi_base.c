
int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0); 
}

int	ft_place_base(char c, int base)
{
	char  base1[17] = "0123456789abcdef";
	char  base2[17] = "0123456780ABCDEF";
	
	while (base--)
	{
		if (base1[base] == c || c == base2[base])
			return (1);
		
	}
	return 0;
}

int	ft_valeur(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);

	return 0;
}

int	ft_atoi_base(const char *str, int str_base)
{
	int resultat;
	int signe;
	int i;

	signe = 1;
	i = 0;
	resultat = 0;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			signe = -1;
		i++;
	}
	while (ft_place_base(*str,  str_base))
	{	
		resultat = resultat * str_base + ft_valeur(str[i]);
			i++;
	}
	return (resultat * signe);	
}
#include <libc.h>
int main(int ac, char **av)
{
	ac = 3;
	printf ("%d\n", ft_atoi_base(av[1], atoi(av[2])));
	return 0;
}
