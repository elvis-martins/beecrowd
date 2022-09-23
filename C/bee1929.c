#include<stdio.h>
#include<stdlib.h>

int main(){
    int c[4], nao_usado[2], soma_abs, dif_abs, indice1, indice2, ver1, ver2, ver3, aux = 0;

    scanf("%d %d %d %d", &c[0], &c[1], &c[2], &c[3]);

   for(int i=0;i<4;i++){
    for(int j=0; j<4; j++){
        if(i != j){
            soma_abs = abs(c[i]+c[j]);
            dif_abs = abs(c[i]-c[j]);
            for(int k =0;k<4;k++){
                if(k != i && k != j) {
                    nao_usado[aux] = k;
                    aux++;
                }
            }
            aux = 0;
            indice1 = nao_usado[0];
            indice2 = nao_usado[1];
            ver1 =soma_abs > 0;
            ver2 = soma_abs > c[indice1] && dif_abs < c[indice1];
            ver3 = soma_abs > c[indice2] && dif_abs < c[indice2];
            if(ver1 && (ver2 || ver3)){
                printf("S\n");
                return 0;
            }
        }
    }
   }
   printf("N\n");
    
    return 0;
}