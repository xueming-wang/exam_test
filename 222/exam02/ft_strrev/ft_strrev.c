
char	*ft_strrev(char *str)
{
	int i;
	int j;
	char tmp;

	
	i = 0;
	j = 0;	
	while(str[i] != '\0')
		i++;
	i = i-1;
	while((i/2)  > j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i--;
		j++;
	}
	return(str);
}

#include <libc.h>
int main()
{
	char str[] = "abcde";
	
	

	printf("%s", ft_strrev(str));
}

