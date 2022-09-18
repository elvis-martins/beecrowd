#include <stdio.h>

int main(){
    int cont = 0;
    char num, valores[10];

    scanf("%c\n",&num);
    fgets(valores, 10, stdin);

    for(int i = 0; i<9; i+=2){
        if(num == valores[i]) cont++;
    }
    printf("%d\n", cont);
    return 0;
}