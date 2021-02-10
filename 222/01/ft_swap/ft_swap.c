#include <libc.h>

void	ft_swap(int *a, int *b)
{
	int tmp; 
	tmp = *a; //把a的值赋予给tmp;
	*a = *b; //把b赋值给a ;
	*b = tmp; //tmp 值赋值给b ;
}

int main()
{
	int a = 22;
	int b = 33;
	ft_swap(&a, &b);
	printf("%d\n", b);
	return 0;	
}

