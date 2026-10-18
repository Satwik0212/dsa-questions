// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    vector<int> arr = {45,6,32,45,3,3,4,21,2,111};

    int j=0;

    while(j<arr.size()){
        int n = 0;

        while(n<arr.size()-1-j){

            if(arr[n]>arr[n+1]){
                swap(arr[n],arr[n+1]);
            }
         n++;
        
        }
        j++;
    }
    

    for(int z=0;z<arr.size();z++){
        cout<< arr[z]<< " ";
    }
    
return 0;}
