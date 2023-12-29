#include <algorithm>
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double answer;
        nums2.insert(nums2.end(),nums1.begin(),nums1.end());
        std::sort(nums2.begin(),nums2.end());
        int size = nums2.size();
        if (size%2==0){
            answer = ((double)(nums2[size/2]+nums2[(size/2)-1]))/2 ;
        }else{
            answer = nums2[ceil(size/2)];
        }
        return answer;
    }
};
