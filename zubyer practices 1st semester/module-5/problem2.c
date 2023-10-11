#include<stdio.h>
int main(){

     int q,r;
     scanf("%d%d",&q,&r);
     if(q%r==0||r%q==0)
     {
        printf("Multiples");
     }
     else
            printf("No Multiples");
     
    return 0;
}