#include <libc.h>
#include <unistd.h>
void	only_a (char *c)
{
	write (1, "a", 1);
}
int main()
{
	char *c = "123";
	only_a(c);
	return 0;
}
