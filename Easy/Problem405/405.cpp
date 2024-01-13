class Solution {
public:
    string toHex(int num) {
        stringstream ss;
        ss<<std::hex<<num;
        string res;
        ss>>res;
        return res;
    }
};
