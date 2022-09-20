#include<stdio.h>

int main(){
     int X, Y, M, x, y, ver1, ver2;

    while(scanf("%d %d %d", &X, &Y, &M) != EOF){
        for(int i = 0; i < M; i++){
            scanf("%d %d", &x, &y);

            ver1 = x<=X && y<=Y;
            ver2 = x<=Y && y<=X;

            (ver1 || ver2) ? printf("Sim\n") : printf("Nao\n");
        }  
    }
    return 0;
}