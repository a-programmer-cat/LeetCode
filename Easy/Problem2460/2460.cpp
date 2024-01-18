class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for (int i = 0 ; i < nums.size()-1 ; ++i){
            if (nums[i]==nums[i+1]){
                nums[i] *= 2;
                nums[i+1] = 0;
            }
        }
        int zero = 0;
        for (int j = 0 ; j < nums.size() ; ++j){
            if (nums[j]==0){
                ++zero;
                nums.erase(nums.begin()+j);
                --j;
            }
        }
        while (zero > 0){
            --zero;
            nums.push_back(0);
        }
        return nums;
    }
};
