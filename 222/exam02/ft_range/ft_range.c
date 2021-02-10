#include <stdlib.h>
int	*ft_range(int start, int end)
{
	int len;
	int i;
	int *tab;

	i = 0;
	len = end - start;
	if(len < 0)
		len = -len;
	tab = (int*)malloc(sizeof(int)* len);
	if (!tab)
		return (NULL);
	while (len >= i)
	{
	
		if (end < start)
		{
			tab[i] = start;
			start--;
			i++;
				
		}
		else
		{
			tab[i] = start;
			start++;
			i++;
		}		
	}
	return (tab);
	
}
#include <stdio.h>
#include <libc.h>
int main(int ac, char **av)
{
	(void)av;
	int len = atoi(av[1])-atoi(av[2]);
	if (len < 0)
		len = -len;
	int *range = ft_range(atoi(av[1]), atoi(av[2]));
	printf("first pointer : %d\n", range[0]);
	int i = 0;
	while (i <= len)
		printf ("%d\n", range[i++]);
}
