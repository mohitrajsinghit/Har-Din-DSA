class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        long l=0,r=0,n=nums.size(),ans=0;
        if (n == 0 || k <= 1) return 0;
        long long prod = 1;
        for(;r<n;r++){
            prod *=nums[r];
            for(;prod>=k;l++){ 
                prod/=nums[l];
            }
            ans += (r-l+1);
        }
        return ans;
    }
};
