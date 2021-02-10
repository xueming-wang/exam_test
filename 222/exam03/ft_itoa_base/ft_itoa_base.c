#include <stdlib.h>
int	ft_strlen_base(int n, int base)
{
	int count;
	if (n == 0)
		count = 1;
	else 
		count = 0;
	while (n)
	{
		n = n/base;
		count++;
	}
	return (count);
}
char	*ft_itoa_base(int value, int base)//base = 2, 4, 8 , 16都是10进制的值
{
	long  tmp;
	int len;
	char *str;

	len = 1;
	if(value < 0)
		tmp = -(long)value;
	else
		tmp = value;
	len = ft_strlen_base(tmp, base);
	if (value < 0 && base == 10)
		len = len + 1;
	if (!(str = malloc(sizeof(char) * len + 1)))
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = (tmp % base <= 9) ? tmp % base + '0': tmp % base - 10 + 'A';
		tmp = tmp / base;
	}
	if (value < 0 && base == 10)
		str[0] = '-';
	return (str);
}

#include <libc.h>
int		main(int ac, char **av)
{
	if (ac == 3)
		printf("%s", ft_itoa_base(atoi(av[1]),atoi(av[2])));
}
