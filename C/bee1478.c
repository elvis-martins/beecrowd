#include<stdio.h>

int main(){
    int entrada = 1 ;

    while(entrada != 0){
        scanf("%d", &entrada);

        for(int i = 0; i< entrada;i++){
            for(int j = 0; j < entrada; j++){
                if(j == 0) printf("%3d", i-j+1);
                else if(i > j) printf("%4d", i-j+1);
                else printf("%4d", j-i+1);
            }
            printf("\n");
        }
        if(entrada != 0) printf("\n");
    }
    
    return 0;
}