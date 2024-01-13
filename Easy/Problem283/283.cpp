class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero = 0;
        for (int i = 0; i < nums.size() ; ++i){
            if (nums[i]==0){
                ++zero;
                nums.erase(nums.begin()+i);
                --i;
            }            
        }
        while(zero!=0){
            nums.push_back(0);
            --zero;
        }
    }
};
