//Nível 7
#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int N;
    unsigned long long int indice_estrela = 0, total = 0, qtd_estrelas_atacadas=0;

    cin >> N;
    int estrela[N], estrela_roubada[N];

    for(int i=0; i <N; i++){
        scanf("%d", &estrela[i]);
        total+= estrela[i];
        estrela_roubada[i] = -1;
    }

    while(indice_estrela >= 0  && indice_estrela < N){
        if(estrela_roubada[indice_estrela] != indice_estrela){
            estrela_roubada[indice_estrela] = indice_estrela;
            qtd_estrelas_atacadas++;
        }
        
        if(estrela[indice_estrela] > 0){
            estrela[indice_estrela]--;
            total--;
            ((estrela[indice_estrela] + 1) % 2 == 0) ? indice_estrela-- : indice_estrela++;
        }
        else {
            indice_estrela --;
        }
    }

    printf("%llu %llu\n", qtd_estrelas_atacadas, total);

    return 0;
}