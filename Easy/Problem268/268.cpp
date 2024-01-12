class Solution {
public:
    int missingNumber(vector<int>& nums) {
        for (int i = 0 ; i <= nums.size() ; ++i){
            if (count(nums.begin(), nums.end(), i) == 0){
                return i;
            }
        }
        return 0;
    }
};
