#include<stdio.h>

int main(){
    int a,b;
    
    scanf("%d", &a);
    scanf("%d", &b);

    (a+b) % 2 == 0 ?printf("1\n") : printf("0\n");

    return 0;
}