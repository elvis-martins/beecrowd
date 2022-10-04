#include<cstdio>
#include<cmath>

int ePrimo(unsigned long long int valor){
    if(valor <= 1) return 0;
    for(int i =2; i <= sqrt(valor); i++){
        if(valor % i == 0) return 0;
    }
    return 1;
}

int main(){
    int N;
    unsigned long long int X;

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%llu", &X);
        (ePrimo(X) == 0) ? printf("Not Prime\n") : printf("Prime\n");
    }

    return 0;
}