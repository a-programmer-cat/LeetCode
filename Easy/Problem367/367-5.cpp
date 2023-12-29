class Solution {
public:
    bool isPerfectSquare(int num) {
        int x = 1;
        while(num > 0) 
        {
            num -= x;
            x += 2;
        }
        return num == 0;
    }
};
