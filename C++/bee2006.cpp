#include<iostream>
#include<string>
using namespace std;

int main(){
    int cont = 0;
    char num;
    string valores;

    cin >> num;
    cin.get();
    getline(cin,valores);
    
    for(int i = 0; i<9; i+=2){
       if(num == valores[i]) cont++;
    }
    cout << cont << endl;

    return 0;
}