class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int temp = money;
        int chocolate_position = min_element(prices.begin(),prices.end())-prices.begin();
        int chocolate = prices[chocolate_position];
        if (chocolate > money){
            return temp;
        }else{
            money -= chocolate;
            prices.erase(prices.begin() + chocolate_position);
        }

        chocolate_position = min_element(prices.begin(),prices.end())-prices.begin();
        chocolate = prices[chocolate_position];
        if (chocolate > money){
            return temp;
        }else{
            money -= chocolate;
            prices.erase(prices.begin() + chocolate_position);
        }
        return money;
    }
};
