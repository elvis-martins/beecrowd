#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int v1, v2, v3;

    cin >> v1 >> v2 >> v3;

    int ver1 = v1 == v2 || v1 == v3 || v2 == v3;
    int ver2 = v1 == (v2+v3) || v1 == abs(v2-v3);

    (ver1 || ver2) ? cout << "S\n"  : cout << "N\n";
    
    return 0;
}