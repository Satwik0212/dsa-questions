// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Write C++ code here
    int a,n,sum = 0,m,x,z;
    m = 1;
    int count = 0;
    
    cin>> a;
    n = a;
    z = a;
    while(a!=0){
        count ++;
        a/=10;
    }
    
while(n != 0){
    int d = n%10;
    n /= 10;
    x = pow(d,count);
    sum = sum + x;
    m++;
    }
    
if(sum == z){
    cout<< "true";
} else {
    cout<< "false";
}
}    
