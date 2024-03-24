class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i = 0;i < nums.size();i++){
            if(nums[i]==target){
                return i;
            }else if(nums[i]<target){
                if(i==nums.size()-1 ||    nums[i+1]>target){
                    return i+1;
                }
            }
        }
        return 0;
    }
};
