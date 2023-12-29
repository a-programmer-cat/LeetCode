#define eps 0.0001
float mysqrt(float n)
{
    float init_value = n;
    float x = init_value;
    float last;

    do{

        last = x;
        x = (x + n/x)/2;

    }while(abs(x - last) > eps);// 比abs(x-n/x)>eps更精确

    return x;
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
