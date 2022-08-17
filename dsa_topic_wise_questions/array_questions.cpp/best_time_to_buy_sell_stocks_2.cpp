class Solution {

public:

    int maxProfit(vector<int>& prices) {

        int i=0;

        int buy_stock = 0, sell_stock = 0, profit = 0;

        int sizee = prices.size()-1;

        while(i < sizee){

            while(i<sizee && prices[i+1] <= prices[i]) i++;

            buy_stock = prices[i];

            while(i<sizee && prices[i+1] > prices[i]) i++;
            
            sell_stock = prices[i];
            
            profit += sell_stock - buy_stock;
        }
        return profit;
    }
};