#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int k, r, j = 1;
    cout<< "enter size of array";  
    cin >> k;

    int arr[k];
    cout<<"enter elements of array";
    for(int i = 0; i<k;i++){
        cin>> arr[i];
    }
    
    cout<< "enter no. of times to rotate";
    cin >> r;
    
    
    while(j<=r){
        int z =k-1;
        int temp = arr[z];
        while(z>=0){
            if(z == 0){
                arr[z] = temp;
                break;
            } 
            arr[z] = arr[z-1];
            z--;
        } j++;}
        
        
    for(int f = 0; f<k;f++){
        cout<< arr[f]<< " ";
    }  
    return 0;
}