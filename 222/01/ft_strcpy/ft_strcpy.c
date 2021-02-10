
char	*ft_strcpy(char *s1, char *s2)
{
	char *tmp;
	
	tmp = s1;
	while (*s2 && *s1)
	{
		*s1++ = *s2++;
	}  
//	*s1 = '\0';
	return (tmp);
}

#include <stdio.h>

int main()
{
	char s1[] = "xuexue";
	char s2[] = "woaini";
 printf("%s\n", ft_strcpy(s1, s2));
	return 0;
}
