#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int i; // 当前字符所在位置
	int repeat; // 需要重复的字符

	i = 0;
	repeat = 0; // 初始化
	if (ac == 2)
	{	
		while (av[1][i]) // 第一个循环 ：字符循环
		{
			if (av[1][i] >='a' && av[1][i] <= 'z')
				repeat = av[1][i] - 'a'+ 1; // 公式算出需要重复的字符

			else if (av[1][i] >='A' && av[1][i] <= 'Z')
				repeat = av[1][i] - 'A'+ 1;
			else
				ft_putchar(av[1][i]);
			while (repeat > 0) // 第二个循环 ： 打印n个字符
			{
			
				ft_putchar(av[1][i]); // 打印
				repeat--; 
			}
		
			i++; // 下一个字符
		}	
		
		
	}
	write(1, "\n", 1);
	return (0);
}
