#include<stdio.h>

int main(){
    unsigned long long int A, B;

    scanf("%llu %llu", &A, &B);

    printf("%llu\n",(A+B)*(B-A+1)/2);
    return 0;
}