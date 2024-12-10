#include<unistd.h>

void ft_print_comb2(void);
void ft_print_comb2(void){
    int i;
    int j; z 
    i = 0;
    while( i <= 99){
        j = i + 1 ;
        while( j <= 99){
            char a1 = (i / 10) + '0';
            char a2 = (i % 10) + '0';
            char a3 = (j / 10) + '0';
            char a4 = (j % 10) + '0';

            write(1,&a1,1);
            write(1,&a2,1);
            write(1," ",1);
            write(1,&a3,1);
            write(1,&a4,1);
            
            if(i!= 98 || j != 99){
                write(1,",",1);
                write(1," ",1);
            }
                 
            
            j++;
        }
        i++;
    } 


}
int main(){
    ft_print_comb2();
    return 0;
}