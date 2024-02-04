//https://leetcode.com/problems/search-insert-position/submissions/1166121747/
SEARCH INSERT POSITION
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        return low;
    }
};
