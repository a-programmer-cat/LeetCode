class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int player_last1=0, player_last2=0;
        int player1_point=0, player2_point=0;
        for (int p1 = 0; p1<player1.size();++p1) {
            if (player_last1 == 10 | player_last2 == 10) {
                player1_point+=player1[p1]*2;
            }else{
                player1_point+=player1[p1];
            }
            player_last2=player_last1;
            player_last1=player1[p1];
        }
    
        player_last1 = 0;
        player_last2 = 0;
        for (int p2 = 0; p2<player2.size();++p2) {
            if (player_last1 == 10 | player_last2 == 10) {
                player2_point+=player2[p2]*2;
            }else{
                player2_point+=player2[p2];
            }
            player_last2=player_last1;
            player_last1=player2[p2];
        }

        if (player1_point > player2_point) {return 1;}
        else if (player2_point > player1_point) {return 2;}
        else {return 0;}
    }
};
