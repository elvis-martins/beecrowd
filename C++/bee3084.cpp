#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int h, m;

    while(cin >> h >>m){
        cout << setw(2) << setfill('0') << h/30 << ":" << setw(2) << setfill('0') << m/6 << "\n";
    }

    return 0;
}