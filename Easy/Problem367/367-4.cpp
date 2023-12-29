class Solution {
public:
    bool isPerfectSquare(int num) {
        long i = 1;
        long square = 1;
        while (square <= num){
            if (square == num){
                return 1;
            }
            ++i;
            square = i*i;
        }
        return 0;
    }
};
