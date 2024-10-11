#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N , sum = 0 , b;
    cin >> N;
    for (int i = 0; i < N ; i++){
        cin >> b;
        sum = b+sum;
        }
        cout << sum;
    return 0;
}