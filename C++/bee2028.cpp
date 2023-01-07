#include<cstdio>

int main(){
    //N = valor inserido para gerar a sequência, quantidade = quantidade de números 
    //presente na sequência
    short int N = 0, quantidade;
    //caso = quantidade de valores de teste
    int caso = 1;

    //Execução termina em EOF
    while(scanf("%hd", &N) != EOF){

        //Cálculo de quantidade de números na sequência
        quantidade = ((1+N)*N/2)+1;
        N == 0 ? printf("Caso %d: %hd numero\n", caso, quantidade) : printf("Caso %d: %hd numeros\n", caso, quantidade);
        printf("0");

        //Imprime a sequência
        for(short int i = 1; i <= N; i++){
            for(short int j = 0; j < i; j++){
                printf(" %hd", i);
            }
        }

        printf("\n\n");
        caso++;
    }

    return 0;
}