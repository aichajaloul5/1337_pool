#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int unsigned i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		else if (s1[i] > s2[i])
		{
			return (1);
		}
		i++;
	} 
	return (0);
}
int main() {
    char s1[] = "hello";
    char s2[] = "hell";
    unsigned int n = 4;
    printf("%d", ft_strncmp(s1, s2 , n));
}