class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1) {
            return false;
        }else{
            while(n%2 == 0){
            n /= 2;
            }   
        }
        return n==1;
    }
};
