#include <libc.h>

int	max(int *tab, unsigned int len)
{
	int max;
	if (len == 0)
		return 0;
	if (!*tab)
		return 0;
	while (len > 1)
	{
		len--;
		if (tab[len] < tab[len - 1])
			max = tab[len - 1];
	}
	return (max);
}

int main()
{
	
	int tab[] = {1, 4, 0};
	int len = 3;
	printf("%d\n", max(tab, len));
	return 0;
}

