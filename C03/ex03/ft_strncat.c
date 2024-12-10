#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i = 0;
	unsigned int j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
int main() {
    char dest[20] = "hello"; 
    char src[] = " world";
    unsigned int nb = 3;
    printf("%s", ft_strncat(dest, src , nb));
    
}