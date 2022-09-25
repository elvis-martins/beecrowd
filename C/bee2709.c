#include<stdio.h>
#include<math.h>

int ePrimo(int n){
    if(n <= 1) return 0; 
    for(int i=2; i<= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main(){
    int M, N, soma;
    const char* frases[2] = {"Bad boy! I’ll hit you.","You’re a coastal aircraft, Robbie, a large silver aircraft."};

    while(scanf("%d",&M) != EOF){
        int V[M];
        soma = 0;

        for(int i=0; i<M; i++) scanf("%d", &V[i]);
        scanf("%d", &N);
        for(int i=M-1; i>=0; i-=N) soma += V[i];
        printf("%s\n", frases[ePrimo(soma)]);
    }

    return 0;
}