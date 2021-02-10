
int	is_power_of_2(unsigned int n)
{
	if (n == 1)
		return 1;

	while (n % 2 == 0)
	
		n = n / 2;

	if (n == 1)
		return 1;
	else 
		return 0;

}
#include <libc.h>
int main()
{
	int n = 7;
	printf("%d", is_power_of_2(n));
	return 0;
}
