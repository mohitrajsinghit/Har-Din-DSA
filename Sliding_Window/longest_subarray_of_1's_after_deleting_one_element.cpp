class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0,r=0,n=nums.size(),ans=0;
        int count =0;
        for(;r<n;r++){
            if(nums[r]==0) count++; //COUNT OF 0 WILL BE 1
            for(;count>1;l++){ //invalid condition //COUNT 2
                if(nums[l]==0)count--; //COUN 1
            }
            ans = max(ans,r-l+1);
        }
        return ans-1;
    }
};
