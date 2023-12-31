#include <bitset>
class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        for (int i = 0 ; i<nums.size();++i){
            for (int j = i+1 ; j<nums.size();++j){
                if (nums[i]==1 || nums[j]==1){
                    continue;
                }
                if (nums[i]%2 != 0 || nums[j]%2 != 0){
                    continue;
                }
                int temp = nums[i] + nums[j];
                bitset<10> bit(temp);
                if (bit.test(bit.size()-1)==0){
                    return 1;
                }
            }
        }
        return 0;
    }
};
