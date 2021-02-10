#include <unistd.h>

int	main()
{
	int i;
	int j;

	i = 'z';
	j = 'Y';

	while ( i >=  'b' && j >= 'A')
	{
		write (1, &i, 1);
		i = i - 2;
		write (1, &j, 1);
		j = j - 2;
	}
	write (1, "\n", 1);
	return 0;
}
