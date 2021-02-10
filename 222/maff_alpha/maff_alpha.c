#include <unistd.h>

/*int main()
{
	int i;	
	i = 97;
	while (i <= 122) 
	{
		if(i % 2 == 0)
		{	
			i = i - 32;
			write(1, &i ,1);
			i = i + 32;
		}
		else
			write(1, &i, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);

}*/

#include <unistd.h>

void	affiche(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int a;
	int b;

	a = 'a';
	b = 'B';
	while (a <= 'y')
	{
		while (b <= 'Z')
		{
			affiche(a);
			a += 2;
			affiche(b);
			b += 2;
		}
	}
	affiche('\n');
	return (0);
}
