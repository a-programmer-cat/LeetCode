class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<1) {
            return false;
        }else{
            while(n%4 == 0){
            n /= 4;
            }   
        }
        return n==1;
   }
};
