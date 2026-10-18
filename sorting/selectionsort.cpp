// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    vector<int> arr = {45,6,32,45,3,3,4,21,2,111};
    int j = 0, ind;

    while(j< arr.size()){
        int min = arr[j];
        ind = j;
        int i= j+1;
        while(i< arr.size()){
            if(arr[i]<min){
                min = arr[i];
                ind = i;
            } 
            i++;
        }
        swap(arr[j], arr[ind]);
        j++;

    }
    for(int z=0;z<arr.size();z++){
        cout<< arr[z]<< " ";
    }
return 0;}
