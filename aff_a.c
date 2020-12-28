#include <unistd.h>
#include <libc.h>
void	sff_a (char *c)
{
	int i;
	
	i = 0;
	while (!*c || c[i] == 'a')
		write (1, 'a', 1);
		i++;
	while (*c && c[i] != 'a')
		write (1, ' ', 1);
		i++;
}	
int main()
{
	char *c = "abc";
	sff_a(c);
	char *c = "dub0 a POIL";
	sff_a(c);
	char *c = "zz sent le poney";
	sff_a(c);
	char *c = 0;
	sff_a(c);
}
