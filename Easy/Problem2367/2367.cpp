class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int ans = 0;
        for (int i = 0;i<nums.size();i++){
            if(std::find(nums.begin(),nums.end(),nums[i]+diff)!=nums.end()){
                if(std::find(nums.begin(),nums.end(),nums[i]+diff*2)!=nums.end()){
                    ans++;
                }
            }
        }
        return ans;
    }
};
