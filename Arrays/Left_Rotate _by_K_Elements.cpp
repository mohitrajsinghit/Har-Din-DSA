https://www.codingninjas.com/studio/problems/rotate-array_1230543?leftPanelTabValue=SUBMISSION
BRUTEFORCE with TLE
vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int temp[k];
    int n=arr.size(); 
    for(int i=0;i<n;i++){
        temp[i] = arr[i];
    }
 
    for(int i=k;i<n;i++){
        arr[i-k]=arr[i];
    }
    
    for(int i=n-k;i<n;i++){
        arr[i]=temp[i-(n-k)];
    }
    return arr;
};


https://leetcode.com/problems/rotate-array/
OPTIMIZED CODE:-
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums.begin(),nums.begin()+(n-k));
        reverse(nums.begin()+(n-k),nums.end());
        reverse(nums.begin(),nums.end());
    }
};
