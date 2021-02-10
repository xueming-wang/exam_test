#include <stdlib.h>
#include <libc.h>
int	*ft_rrange(int start, int end)
{
	int len;
	int i;
	int *tab;

	i = 0;
	len = end - start;
	if (len < 0)
		len = -len;
	if(!(tab = (int*)malloc(sizeof(int) * len)))
		return (NULL);

	/*len = (end >= start) ? end - start + 1 : start - end + 1;	
	while (len--)
		tab[len] = (end >= start) ? start++ : start--;*/


	while (len >= i)
	{
		if (end < start)
		{
			tab[i] = end;
			end++;
			i++;
		}
		else
		{
			tab[i] = end;
			end--;
			i++;
		}
		
	}
	return (tab);
	 	
}

int main(int ac, char **av)
{
	int len;
	int i;
	int *tab;
	i = 0;
	len = atoi(av[2]) -atoi(av[1]);
	if (len < 0)
		len = -len;
	tab = ft_rrange(atoi(av[1]), atoi(av[2]));
	printf ("frist :  %d\n", tab[0]);
	while (len >= i)
		printf("%d\n", tab[i++]);
	
}

