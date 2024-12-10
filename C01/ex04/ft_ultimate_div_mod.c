#include <unistd.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}


int	main(void)
{
	int	a = 5;
	int	b = 2;
	ft_ultimate_div_mod(&a, &b);
    char c_a = a +'0';
    char c_b = b +'0';
	write(1,&c_a,1);
    write(1,"\n",1);
    write(1,&c_b,1);
    write(1,"\n",1);
}