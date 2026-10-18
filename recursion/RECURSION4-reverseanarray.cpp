// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int reverse(int arr[], int i, int j){
     
    if(i >= j){
        return 0;
    }
    else{
    swap(arr[i],arr[j]);
    i++;    
    j--;
    print(arr, i, j);
    }
    return 0;
}

int main() {
    int arr[5] = {1,2,3,4,5};
    print(arr, 0 ,4);
    for (int k = 0; k < 5; k++) {
    cout << arr[k] << " ";
}
    return 0;
}


// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int arr[5] = {1,2,3,4,5};
    int i = 0,j = 4,z;
    while(i<=j){
        //swap(arr[i],arr[j]);
        z = arr[i];
        arr[i] = arr[j];
        arr[j] = z;
        i++;
        j--;
    }

    for(int k = 0; k<=4;k++){
        cout<<arr[k]<< " ";
    }
    return 0;
}