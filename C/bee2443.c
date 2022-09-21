#include<stdio.h>

int main(){
    int a,b,c,d, num, den, aux_num, aux_den, i=2, mdc=1;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    num = a*d+c*b;
    den = b*d;
    aux_num = num;
    aux_den= den;


    while(aux_num > 1 && aux_den > 1){
        while(aux_num % i == 0 || aux_den % i == 0){
            if(aux_num % i == 0 && aux_den % i == 0){
                mdc*=i;
                aux_num /= i;
                aux_den /= i;
            }
            else{
                if(aux_num % i == 0) aux_num /= i;
                if(aux_den % i == 0) aux_den /= i;
            }
        }
        i++;
    }
    printf("%d %d\n", num/mdc, den/mdc);

    return 0;
}