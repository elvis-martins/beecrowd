#include<iostream>
#include<cmath>
using namespace std;

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

    while(cin >> M){
        int V[M];
        soma = 0;

        for(int i=0; i<M; i++) cin >> V[i];
        cin >> N;
        for(int i=M-1; i>=0; i-=N) soma += V[i];
        cout << frases[ePrimo(soma)] << "\n";
    }

    return 0;
}