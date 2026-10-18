// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int printstring(int n, string s){
    if(n==0){
        return 0;
    } else {
        cout << s<< endl;
        n--;
        printstring(n, s);
        return 0;
    }
}

int main() {
    // Write C++ code here
    printstring(5,"Satwik");
    return 0;
}