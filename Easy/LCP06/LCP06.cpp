class Solution {
public:
    int minCount(vector<int>& coins) {
        int ans = 0;
        for (int i = 0; i<coins.size(); i++){
            int temp = coins[i];
            if (temp%2!=0){
                ans+=(abs(temp/2)+1);
            }else{
                ans+=abs(temp/2);
            }
        }
        return ans;
    }
};
