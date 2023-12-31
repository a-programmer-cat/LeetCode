class Solution {
public:
    int dayOfYear(string date) {
        int y,m,d;
        sscanf(date.c_str(),"%d-%d-%d",&y,&m,&d);
        map<int, int> tmp;
        tmp[1]=31;
        tmp[3]=31;
        tmp[4]=30;
        tmp[5]=31;
        tmp[6]=30;
        tmp[7]=31;
        tmp[8]=31;
        tmp[9]=30;
        tmp[10]=31;
        tmp[11]=30;
        if(1==m){
            return d;
        }else if(2==m){
            return tmp[1]+d;
        }else{
            int pre=0;
            if(y!=1900 && y%4==0){
                 pre=tmp[1]+29;
            }else{
                 pre=tmp[1]+28;
            }
            for(int i=3;i<m;i++){
                pre+=tmp[i];
            }
        return pre+d;
        }
    }
};
