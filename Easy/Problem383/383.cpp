class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        for(int j = 0; j<ransomNote.length(); ++j){
            if (magazine.find(ransomNote[j]) != string::npos){
                magazine.erase(magazine.begin()+magazine.find(ransomNote[j]));
                continue;
            }else{
                return false;
            }
        }
        return true;
    }
};
