class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>::iterator i;
        for (i = nums.begin() ; i < nums.end() ; ++i){
            if (*i == val){
                nums.erase(i);
                i -= 1;
            }
        }
        return nums.size();
    }
};
