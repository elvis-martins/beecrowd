#include<cstdio>
#include<cmath>
#include<cstring>

int ePrimo(int n){
    if(n <= 1) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int POW(int n, int e){
    int v = 1;
    for(int i =0; i < e; i++){
        v *= n;
    }
    return v;
}

int verificaSuper(int N){
    int multiplicador,qtd_digitos;
    char aux[100000];

    sprintf(aux, "%d", N);
    qtd_digitos = strlen(aux);
    multiplicador = POW(10, qtd_digitos - 1);
    for(int i = 0; i < qtd_digitos;i++){
        if(ePrimo(N / multiplicador ) == 0){
            return 0;
        }
        N %= multiplicador;
        multiplicador /= 10;
    }
    return 1;
}

int main(){
    int N;
    
    while(scanf("%d", &N) != EOF){
        if(ePrimo(N) == 0) printf("Nada\n");
        else{
           (verificaSuper(N) == 0) ? printf("Primo\n") :  printf("Super\n");;
           
        }
    }

    return 0;
}