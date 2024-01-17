class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int ans = 0;
        for (int i = 0 ; i < words.size() ; ++i){
            for (int j = i+1 ; j < words.size() ; ++j){
                string s1 = words[i];
                string s2 = words[j];
                if (s1[0]==s2[1] && s1[1]==s2[0]){
                    ++ans;
                }
            }
        }
        return ans;
    }
};
