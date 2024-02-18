https://www.codingninjas.com/studio/problems/remove-duplicates-from-sorted-array_1102307

*Brute Force Approach* - storing the values in set
//code
set <int> set;
for(int i=0;i<n;i++){
  set.insert(arr[i]);
}

int k = set.size();
int j=0;
copy(set.begin(),set.end(),arr.begin());
return k;
}
  
//Optimal Approach Using 2 pointer approach

int i=0;
    for(int j=1;j<n;++j){
        if(arr[j]!=arr[i]){
            ++i;
            arr[i]=arr[j];
            
        }
    }
    return i+1;



Leetcode Q
https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/1162043025/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //if (nums.empty()) return 0;

        int i = 0;
        for (int j = 1; j < nums.size(); ++j) {
            if (nums[j] != nums[i]) {
                ++i;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};
