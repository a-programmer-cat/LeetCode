
#include <unordered_map>

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> frequencyMap;
        int maxFrequency = 0;
        
        for (int num : nums) {
            frequencyMap[num]++;
            maxFrequency = max(maxFrequency, frequencyMap[num]);
        }
        
        int totalMaxFrequencyElements = 0;
        for (auto it = frequencyMap.begin(); it != frequencyMap.end(); ++it) {
            if (it->second == maxFrequency) {
                totalMaxFrequencyElements += maxFrequency;
            }
        }
        
        return totalMaxFrequencyElements;
    }
};
