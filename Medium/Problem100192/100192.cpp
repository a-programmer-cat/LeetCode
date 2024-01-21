#include <unordered_map>
std::string sortStringByCharCount(const std::string& input) {
    std::map<char, int> charCount;

    // 统计每个字符出现的次数
    for (char c : input) {
        charCount[c]++;
    }

    // 将统计结果转为vector以便排序
    std::vector<std::pair<char, int>> charCountVec(charCount.begin(), charCount.end());

    // 使用lambda表达式对vector进行排序
    std::sort(charCountVec.begin(), charCountVec.end(), [](const auto &lhs, const auto &rhs) {
        return lhs.second > rhs.second; // 按照字符出现次数从多到少排序
    });

    // 构建排序后的字符串
    std::string sortedString;
    for (const auto &p : charCountVec) {
        for (int i = 0; i < p.second; ++i) {
            sortedString.push_back(p.first);
        }
    }

    return sortedString;
}

class Solution {
public:
    int minimumPushes(string word) {
        word = sortStringByCharCount(word);
        unordered_map<char, int> umap = {};
        int total_presses = 0;
        for(char c:word){
            if (umap.size()<8){
                if(umap.find(c)!=umap.end()){
                    total_presses+=umap.find(c)->second;
                }else{
                    umap[c]=1;
                    ++total_presses;
                }
            }else if (umap.size()<16){
                if(umap.find(c)!=umap.end()){
                    total_presses+=umap.find(c)->second;
                }else{
                    umap[c]=2;
                    total_presses+=2;
                }
            }else if (umap.size()<24){
                if(umap.find(c)!=umap.end()){
                    total_presses+=umap.find(c)->second;
                }else{
                    umap[c]=3;
                    total_presses+=3;
                }
            }else{
                if(umap.find(c)!=umap.end()){
                    total_presses+=umap.find(c)->second;
                }else{
                    umap[c]=4;
                    total_presses+=4;
                }
            }
        }
        return total_presses;
    }
};
