#include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	i = 0;
	int	j = 0;
	int	size = 0;
	while (to_find[size])
		size++;
	if (size == 0)
		return (str);
	while (str[i])
	{
		while (to_find [j] == str [i + j])
		{
			if (j == size - 1)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
int main() {
    char str[] = "hello world";
    char to_find[] = "world";
    char *result = ft_strstr(str, to_find);
      if (result) {
        printf("%s", result);  
    } else {
        printf("Not found\n");  
    } 
    
}