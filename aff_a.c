#include <unistd.h>
void	sff_a (char *c)
{
	int i;
	
	i = 0;
	while (c[i] == 'a' || !*c)
		write (1, 'a', 1);
	while (c[i] != 'a' && *c)
		write (1, ' ', 1);
}	
