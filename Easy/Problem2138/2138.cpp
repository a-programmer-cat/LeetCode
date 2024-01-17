class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int temp = s.length() % k;
        if(temp>0){
            temp = k-temp;
        }
        s.append(temp, fill);
        vector<string> res= {};
        for(int i = 0 ; i < s.length() ; i += k){
            res.push_back(s.substr(i,k));
        }
        return res;
    }
};
