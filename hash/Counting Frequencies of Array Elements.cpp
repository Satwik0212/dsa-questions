// Online C++ compiler to run C++ program online 
#include <bits/stdc++.h> 
using namespace std; 
int main() { 
// Write C++ code here 
vector<int> arr = {1,2,3,4,5,4,5,6,7,8,7,5,4}; 
int hash[9] = {0}; 
for(int i=0;i<arr.size();i++){ 
    hash[arr[i]]++; 
} 
int n; 
cin >> n; 
cout << hash[n]; 
return 0; }