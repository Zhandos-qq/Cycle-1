#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int a , b;
    cin >> a >> b;
    int n=sqrt(a);
    if (n * n < a){
        n++;
    }
    while (n*n <=b){
        cout << n*n <<" ";
        n++;
    }
    
    return 0;
}