//https://www.codingninjas.com/studio/problems/largest-element-in-the-array-largest-element-in-the-array_5026279
//*Largest Element in the Array*

#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.

    // sort(arr.begin(),arr.end());
    // return arr[arr.size()-1];

    int max = arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
