// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int print(int n, int sum){
    if(n==0){
        cout<< sum;
    } else{
        sum += n;
        print(n-1, sum);
    } return 0;
    
}

int main() {
    // Write C++ code here
    print(5, 0);
    return 0;
}