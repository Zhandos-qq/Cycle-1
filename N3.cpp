#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N , b , d=0 , a=0 ,c=0;
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> b;
        if (b==0){
            d++;
        }else if(b>0){
            a++;
        }
        else{
            c++;
        }
    }
    cout << d <<" "<< a << " " << c;
    return 0;
}