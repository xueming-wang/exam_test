#include <unistd.h>


void	ft_print_number()
{
	int c;
	
	c = 48;
	while (c <= 57)
	{
		write (1, &c, 1);
		c++;
	
	}
}

int main()
{
	ft_print_number();
	return 0;
}
