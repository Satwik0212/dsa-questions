// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    vector<int> arr = {45,6,32,45,3,3,4,21,2,111};

    int j=1;
    while(j<arr.size()){
        int current = arr[j];
        int z = j-1;
        while(z>=0 && current<arr[z]){
         arr[z+1] = arr[z];
         z--;
    }arr[z+1] = current; 
    j++;
    }

    
    

    for(int k=0;k<arr.size();k++){
        cout<< arr[k]<< " ";
    }
    
return 0;}
