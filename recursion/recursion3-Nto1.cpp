// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int print(int n){
    if(n<1){
        return 0;
    }else{
        cout<< n<<endl;
    n--;
    print(n);
    } 
    
    return 0;
}

int main() {
    // Write C++ code here
    print(5);
    return 0;
}