#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int entrada = 1 ;

    while(entrada != 0){
        cin >> entrada;

        for(int i = 0; i< entrada;i++){
            for(int j = 0; j < entrada; j++){
                if(j == 0) cout << right<< setw(3)<< i-j+1;
                else if(i > j) cout << right << setw(4) << i-j+1;
                else cout << right<< setw(4)<< j-i+1;
            }
            cout << "\n";
        }
        if(entrada != 0) cout << "\n";
    }
    
    return 0;
}