#include <unordered_map>
class Solution {
public:
    int minimumPushes(string word) {
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
