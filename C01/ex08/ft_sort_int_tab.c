#include <stdio.h>
void ft_sort_int_tab(int *tab, int size){
    int	x;
	int	y;

	while (size >= 0)
	{
		x = 0;
        
		while (x < size -1)
		{
			if (tab[x] > tab[x + 1])
			{
				y = tab[x];
				tab [x] = tab [x + 1];
				tab [x + 1] = y;
			}
			x++;
		}
		size--;
	}

}
int main(){
    int tab[] = {5, 3, 9 , 3, 1};
    int size = 5;

    ft_sort_int_tab(tab, size);
    printf("%d,%d,%d,%d,%d" ,tab[0], tab[1], tab[2], tab[3], tab[4]);
}