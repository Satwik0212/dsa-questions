// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int print(int i, int n){
    if(n<1){
        return 0;
    }else{
        cout<< i<<endl;
    n--;
    print(i+1,n);
    } 
    
    return 0;
}

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    print(1,n);
    return 0;
}