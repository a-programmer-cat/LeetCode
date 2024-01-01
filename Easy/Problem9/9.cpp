class Solution {
public:
    bool isPalindrome(int x) {
        long long reversedInteger = 0, remainder;
        long long originalInteger = x;
        if (x<0){
            return false;
        }
        while( x!=0 ) {
            remainder = x%10;
            reversedInteger = reversedInteger*10 + remainder;
            x /= 10;
        }
        if (originalInteger == reversedInteger)
            return true;
        else
            return false;
    }
};
