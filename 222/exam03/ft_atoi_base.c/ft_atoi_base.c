
//int	ft_isspace(char c)
//{
//	if ((c >= 9 && c <= 13) || c == 32)
//		return (1);
//	return 0;
//}
int	ft_strlen(char *c)
{
	int i;
	
	i = 0;
	while (c[i])
		i++;
	return i;
}
int	check_base(char *base)
{
	int i;
	int j;

	i = 0;
	j = i + 1;
	if (base[0] == '\0' ||  base[1] == '\0')
		return (0);
	while (base[i])
	{	
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
			return (0);
		if (ft_isspace(base[i]) || base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_n(char c, char *base)
{
	int i;
	
	i = 0;
	while(base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int len;
	int signe;
	int i;
	int resultat;
	int n;

	signe = 0;
	resultat = 0;
	i = 0;
	len = ft_strlen (base);
	if (!(check_base(base)))
		return (0);
	
	while(ft_isspace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe++;
		i++;
	}
	signe = (signe % 2) == 0 ? 1 : -1;
	while ((n  = ft_n(str[i], base)) >= 0)
	{
		resultat = resultat * len + n;
		i++;
	}
	return (resultat * signe);
}

#include <libc.h>
int		main(int ac, char **av)
{
	if (ac == 3)
		printf("result: %d\n", ft_atoi_base(av[1], av[2]));
	return (0);
}
