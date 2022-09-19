#include <iostream>
using namespace std;

int main(){
    int X, Y, M, x, y, ver1, ver2;

    while(cin >> X >> Y >> M){
        for(int i = 0; i < M; i++){
            cin >> x >> y;
            ver1 = x<=X && y<=Y;
            ver2 = x<=Y && y<=X;

            (ver1 || ver2) ? cout  << "Sim\n" : cout << "Nao\n";
        }
    }
}