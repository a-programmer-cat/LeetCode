class Solution {
public:
    vector<int> runningSum(vector<int>& nums)   {
        int x=nums[0];
        vector<int> answer={x};
        for(int i=1;i<nums.size();i++){
           x=x+nums[i];
           answer.push_back(x);
        }
        return answer;
    }
};
