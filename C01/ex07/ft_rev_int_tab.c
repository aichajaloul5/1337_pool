#include <stdio.h>
void ft_rev_int_tab(int *tab, int size){
    int i = 0;
    int n = size - 1;
    while(i< n){
        int h;
        h = tab[i];
        tab[i] = tab[n];
        tab[n] = h;
        i++;
        n--;
    }

}                                              
int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	size = 5;

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}