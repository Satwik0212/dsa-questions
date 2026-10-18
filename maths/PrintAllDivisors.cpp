// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int a;
    cout << "enter the no.";
    cin >> a;
    
    for(int i=1;i<=a;i++){
        if(a%i == 0){
            cout<< i << ",";
        }
    }

    return 0;
}