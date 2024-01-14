class Solution {
public:
    int xorOperation(int n, int start) {
        int ans = start + 2 * 0;
        int m = 1;
        while(m!=n){
            ans = ans^(start + 2 * m);
            ++m;
        }
        return ans;
    }
};
