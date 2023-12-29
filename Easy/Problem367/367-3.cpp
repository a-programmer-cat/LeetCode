#define eps 0.000001
float mysqrt(float n)
{
    float left = 0, right = n;
    float mid = 0;
    float last;

    if(n == 1) return 1;
    if(n < 0) return 0;

    do{

        if(mid  > n / mid)
            right = mid;
        else
            left  = mid;

        last = mid;

        mid = left + (right-left) / 2;

    }while(abs(mid-last) > eps);// 相比使用right-left > eps判断，这样更加精确

    return mid;
}


class Solution {
public:
    bool isPerfectSquare(int num) {
        long long num2 = (long long)num;
        int integer = (int)mysqrt(num2);
        if (num2 == (long long)integer*integer){
            return 1;
        }
        return 0;
    }
};
