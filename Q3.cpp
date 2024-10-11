#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long a, b, c, d , e , f = 0;
    cin >> a >> b >> c >> d >> e;
    for (int x = 0; x <= 1000 ; x++){
        if (x==e){
            continue;
        }
        if (a*x*x*x+b*x*x+c*x+d==0){
            f++; 
        }
    }
    cout << f <<" ";
    return 0;
}