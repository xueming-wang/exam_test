#include <unistd.h>
void	rot_13(char *c)
{
	int i;

	i = 0;	
	while(c[i] != '\0')
	{
		if((c[i] >= 'a' && c[i] <= 'm') || (c[i] >= 'A' && c[i] <= 'M')) 
		{	
			c[i] = c[i] + 13;
			write (1, &c[i], 1);
		
		}

		else if((c[i] >= 'n' && c[i] <= 'z') || (c[i] >= 'N' && c[i] <= 'Z')) 
		{
			c[i] = c[i] - 13;
			write (1, &c[i], 1);
		
		}
		else
			write(1, &c[i], 1);
		i++;
	}
	write (1, "\n", 1); 
}

int main ()
{
	char c[100] = "abc 123 xyz";
	rot_13(c);
	return 0;
}
