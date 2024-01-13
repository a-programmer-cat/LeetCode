class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        switch(purchaseAmount%10){
            case 0:
                return 100-purchaseAmount;
                break;
            case 1:
                return 100-(purchaseAmount-1);
                break;
            case 2:
                return 100-(purchaseAmount-2);
                break;
            case 3:
                return 100-(purchaseAmount-3);
                break;
            case 4:
                return 100-(purchaseAmount-4);
                break;
            case 5:
                return 100-(purchaseAmount+5);
                break;
            case 6:
                return 100-(purchaseAmount+4);
                break;
            case 7:
                return 100-(purchaseAmount+3);
                break;
            case 8:
                return 100-(purchaseAmount+2);
                break;
            case 9:
                return 100-(purchaseAmount+1);
                break;
        }
        return 0;
    }
};
