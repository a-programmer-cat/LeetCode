class Solution {
public:
    bool squareIsWhite(string coordinates) {
        bool ans;
        switch(coordinates[0]){
            case 'a':
            case 'c':
            case 'e':
            case 'g':
                ans = false;
                break;
            case 'b':
            case 'd':
            case 'f':
            case 'h':
                ans = true;
                break;
        }
        switch(coordinates[1]){
            case '1':
            case '3':
            case '5':
            case '7':
                break;
            case '2':
            case '4':
            case '6':
            case '8':
                if (ans == false){ans = true;}
                else if(ans == true){ans = false;}
                break;
        }
        return ans;
    }
};
