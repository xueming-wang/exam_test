
int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i]!='\0' && s2[i]!='\0')
	{
		if(s1[i] != s2[i]) 
			break;
		i++;
	}
	return (s1[i] - s2[i]);
}
/*第二种
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}*/


#include <libc.h>
int main(int ac, char **av)
{
	printf("%d", ft_strcmp(av[1], av[2]));
	return 0;
}
