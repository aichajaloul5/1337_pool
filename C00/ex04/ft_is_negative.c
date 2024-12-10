#include<unistd.h>

void ft_is_negative(int n);
void ft_is_negative(int n){
    if(n<0){
        write(1,"N",1);
    }else if(n>0){
        write(1,"P",1);
    } 


}
int main(){
    int nbr = 1337;
    ft_is_negative(nbr); 
    
    return 0;

}