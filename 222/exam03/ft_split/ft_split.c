#include <stdlib.h>
int	ft_isspace(char c)
{
	return (c == ' ' || c  == '\t' || c == '\n');
}

int	count_word(char *str)
{
	int count;
	
	count = 0;
	while (*str)
	{
		while (*str && ft_isspace(*str))
			str++;
		if (*str && !ft_isspace(*str))
		{	
			count++;
			while (*str && !ft_isspace(*str))
				str++;
		}
	}
	return (count);
}

char	*malloc_word(char *str)
{
	int i;
	char *tab;

	i = 0;
	while (str[i] && !ft_isspace(str[i]))
		i++;
	if(!(tab = (char*)malloc(sizeof(char)* i + 1)))
		return (NULL);
	i = 0;
	while (str[i] && !ft_isspace(str[i]))
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	**ft_split(char *str)
{
	char **arr;
	int i;
	int count;

	i = 0;
	count = count_word(str);
	if(!(arr = (char**)malloc(sizeof(char*) * count + 1)))
		return (NULL);
	while (*str)
	{
		while (*str && ft_isspace(*str))
			str++;
		if (*str && !ft_isspace(*str))
		{
			arr[i] = malloc_word(str);
				i++;
			while (*str && !ft_isspace(*str))
				str++;
		}
	}
	arr[i] = NULL;
	return (arr);
}
#include <libc.h>
int	main(int ac, char **av)
{
	char **arr;
	char *phrase = " Hello, xuexue	 wnlew! ";
	arr = ft_split(phrase);
	printf("%s\n", arr[0]);
	printf("%s\n", arr[1]);
	printf("%s\n", arr[2]);
	printf("%s\n", arr[3]);
}
	
	
