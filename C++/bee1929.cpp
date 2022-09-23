#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main(){
    int c[4], soma_abs, dif_abs, indice1, indice2, ver1, ver2, ver3;
    vector<int> nao_usado;

    cin >> c[0] >> c[1] >> c[2] >> c[3];

   for(int i=0;i<4;i++){
    for(int j=0; j<4; j++){
        if(i != j){
            soma_abs = abs(c[i]+c[j]);
            dif_abs = abs(c[i]-c[j]);
            for(int k =0;k<4;k++){
                if(k != i && k != j) nao_usado.insert(nao_usado.begin(), k);
            }
            indice1 = nao_usado[0];
            indice2 = nao_usado[1];
            ver1 =soma_abs > 0;
            ver2 = soma_abs > c[indice1] && dif_abs < c[indice1];
            ver3 = soma_abs > c[indice2] && dif_abs < c[indice2];
            if(ver1 && (ver2 || ver3)){
                cout << "S\n";
                return 0;
            }
        }
    }
   }
   cout << "N\n";
    
    return 0;
}