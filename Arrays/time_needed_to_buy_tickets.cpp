class Solution {
public:
    int timeRequiredToBuy(vector<int>& nums, int k) {
        int sum = 0;
        int n=nums.size(),i=0;
        for(;i<n;i++){
            if(nums[k]>nums[i]){
                sum +=nums[i];
            }else{
                sum+=nums[k];
            }
        }
        for(int i=k+1;i<n;i++){
            if(nums[i]>=nums[k]){
                sum--;
            }
        }
        return sum;
    }
};
