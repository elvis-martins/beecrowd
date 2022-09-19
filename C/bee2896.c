#include <stdio.h>

int main(){
    int teste, N, K, aux;

    scanf("%d",&teste);

    for(int i = 0;i<teste;i++){
        scanf("%d %d", &N, &K);
        aux = N/K;
        N+= aux*(1-K);
        printf("%d\n", N);
    }
    return 0;
}