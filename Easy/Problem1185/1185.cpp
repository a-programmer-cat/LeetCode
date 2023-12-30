//基姆•拉尔森公式
class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        vector<string> abc = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        if (month==1 || month==2){
            month+=12;
            --year;
        }
        int ans = (day + 2*month + 3*(month + 1) / 5 + year + year / 4 - year / 100 + year / 400 + 1) % 7;
        return abc[ans];
    }
};
