#include <iostream>
using namespace std;

int main(){
    int teste, N, K;

    cin >> teste;

    for(int i=0; i<teste;i++){
        cin >> N >> K;
        N+= (-(N/K)*K + N/K);
        
        cout << N << endl;
    }

    return 0;
}