//cyclically rotate an array by one

#include <bits/stdc++.h> 
//Rotate fn code
void rotate(vector<int>& arr, int n) {
    // Write your code here
    reverse(arr.begin(), arr.end());
    reverse(arr.begin()+1, arr.end());
}