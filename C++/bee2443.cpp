#include<iostream>
using namespace std;

int main(){
    int a,b,c,d, num, den, aux_num, aux_den, i=2, mdc=1;

    cin >> a >> b >> c >> d;

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

    cout << num/mdc << " " << den/mdc << "\n";

    return 0;
}