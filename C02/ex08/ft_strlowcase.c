#include <stdio.h>
char	*ft_strlowcase(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
int main(){
    char str[] = "LKJHGFGHJ"; 
    printf("%s", ft_strlowcase(str));
}