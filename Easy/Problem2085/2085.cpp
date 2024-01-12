class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int ans = 0;
        for (int i = 0 ; i < words1.size() ; ++i){
            string word = words1[i];
            if(count(words1.begin(), words1.end(), word) == 1){
                if(count(words2.begin(), words2.end(), word) == 1){
                    ++ans;
                }
            }
        }        
        return ans;
    }
};
