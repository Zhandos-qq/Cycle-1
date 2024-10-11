#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x,d=0;
    cin >> x;
    for (int i = 1;i <= x ; i++){
        if ( x % i == 0){
            d++;
        }}
    cout << d;
        
    return 0;
}