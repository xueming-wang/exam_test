
int	ft_atoi(const char *str)
{
	int i;
	int resultat;
	int signe;

	i = 0;
	resultat = 0;
	signe = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
			if (str[i] == '-')
				signe = -1;
			i++;
		
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultat = resultat * 10 + str[i] - '0';
		i++;
	}	
	return (resultat * signe);
}
#include <libc.h>
int main()
{
	printf("%d\n", ft_atoi("2147483649"));
	printf("%d\n", atoi("2147483649"));

}


