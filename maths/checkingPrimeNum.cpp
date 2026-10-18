// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int n, i=1,j; 
    cin>>n;
    vector<int> nums;
    while(i <= sqrt(n)){
        if(n%i == 0){
            nums.push_back(i);
            j = n/i;
            if(j != i){
                nums.push_back(j);
            } 
        } i++;
    }
    if(nums.size() <= 2){
        cout<< "it is a prime number";
    } else{
        cout<< "it is not a prime number";
    }
    return 0;
}