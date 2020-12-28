#include <unistd.h>
void	maff_alpha(char *c)
{
	write (1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
}
int main()
{
char *c;
maff_alpha(c);
return 0;
}
