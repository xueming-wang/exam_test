#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int i;
	char *dest;

	i = 0;
	if (src[i])
		i++;
	 dest  = (char*)malloc(sizeof(char)*i+1);
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
#include <libc.h>
int main()
{
	char *src = "abc";
	printf("%s\n", ft_strdup(src));

}
