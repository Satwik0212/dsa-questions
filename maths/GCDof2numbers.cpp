// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int a,b, min, max_fac;
    cout << "enter the nos";
    cin >> a >> b;
    a = abs(a);
b = abs(b);
    if(a>b){
        min = b;
    } else {
        min = a;
    }
    for(int i=1;i<=min;i++){
        if(a%i == 0 && b%i == 0){
            max_fac = i;
        }
        }
    cout << max_fac ;
    return 0;
}