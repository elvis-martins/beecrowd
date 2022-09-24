#include<iostream>
using namespace std;

int main(){
    int a,b;
    
    cin >> a;
    cin >> b;

    (a+b) % 2 == 0 ? cout << "1\n" : cout << "0\n";

    return 0;
}