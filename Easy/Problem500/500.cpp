class Solution {
public:
    const string s1 = "qwertyuiopQWERTYUIOP";
    const string s2 = "asdfghjklASDFGHJKL" ;
    const string s3 = "zxcvbnmZXCVBNM" ;

    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        for (int i = 0 ; i < words.size() ; ++i){
            bool ok = true;
            string s;
            if (s1.find(words[i][0]) != string::npos){
                s = s1;
            } else if(s2.find(words[i][0]) != string::npos){
                s = s2;
            }else{
                s = s3;
            }
            for (int j = 1 ; j < words[i].length() ; ++j){
                if (s.find(words[i][j]) == string::npos){
                    ok = false;
                    break;
                } 
            }
            if (ok){
                ans.push_back(words[i]);
            }
            
        }
        return ans;
    }
};
