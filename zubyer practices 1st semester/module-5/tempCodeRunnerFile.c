#include<stdio.h>
int main(){

    int x,div;
    scanf("%d",&x);
    div= x/1000;
    
    if(div%2==0) {
        printf("Even");
    }    
    else 
        printf("Odd");
    return 0;
}