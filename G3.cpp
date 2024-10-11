#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x;
    cin >> x;
    if (x % 2 == 0){
        cout << "2";
        return 0 ;
    }
    
    for (int i = 3; i <= sqrt(x); i=i+2){
        if (x % i == 0){
            cout << i << endl;
            return 0;
        }
    }
   cout << x;
    return 0;
}