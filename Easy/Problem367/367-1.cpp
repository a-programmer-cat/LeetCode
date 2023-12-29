float mysqrt(float x)
{
    float xhalf = 0.5f*x;
    int i = *(int*)&x; 
    if(!x) return 0;
    i = 0x5f375a86- (i>>1); 
    x = *(float*)&i; 
    x = x*(1.5f-xhalf*x*x);//可以通过重复这一行提高精度
    x = x*(1.5f-xhalf*x*x);
    return 1/x;
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
