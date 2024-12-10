#include<unistd.h>

void ft_print_combn(int n);
void ft_print_combn(int n){
    int i;
    i ='0';
    while(i <= '4'){
        if(n == 1){
            write(1,&i,1);
        }
        else{
            int j;
            j = i+1;
            while( j <= '4'){
                if(n == 2){
                    write(1,&i,1);
                    write(1,&j,1);
                }
                else{
                    int k;
                    k = j +1;
                    while( k <= '4'){
                        if(n == 3){
                            write(1,&i,1);
                            write(1,&j,1);
                            write(1,&k,1);
                        }else{
                            int h;
                            h = k +1;
                            while( h <= '4'){
                                if(n == 4){
                                    write(1,&i,1);
                                    write(1,&j,1);
                                    write(1,&k,1);
                                }
                            }
                        }
                    }
                }

            }

        }
       
    }
}
int main(){
    ft_print_combn(3);

}