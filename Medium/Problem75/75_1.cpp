class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0, one = 0, two = 0;
        for (int i = 0 ; i < nums.size() ; ++i){
            switch(nums[i]){
                case 0:
                    ++zero;
                    break;
                case 1:
                    ++one;
                    break;
                case 2:
                    ++two;
                    break;
            }
        }    
        nums.clear();
        while(zero != 0){
            nums.push_back(0);
            --zero;
        }    
        while(one != 0){
            nums.push_back(1);
            --one;
        }    
        while(two != 0){
            nums.push_back(2);
            --two;
        }    
    }
};
