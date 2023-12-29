class Solution {
public:
    int numberOfSteps(int num) {
        int answer=0;
        while(num!=0){
            answer++;
            if(num%2==0){
                num=num/2;
            }else{
                num=num-1;
            }
        }
        return answer;
    }
};
