#include<stdio.h>
int main(){

    char x;
    int y;
    scanf("%c",&x);
    
    if((x>='A' && x<='Z')){
        printf("%c",x+32); 
    }
    else if((x>='a' && x<='z')){
        printf("%c",x-32); 
    }
    
    return 0;
}