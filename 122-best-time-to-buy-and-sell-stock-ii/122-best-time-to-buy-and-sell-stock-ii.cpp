class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int buy = 0;
        int max_profit = 0;
        int sell = 0;
        
        for(int i=0; i<prices.size()-1; i++){
            
            if(prices[i] < prices[i+1]){
                buy = prices[i];//b = 1,
                
            }
            if(prices[i+1] > prices[i]){
                sell = prices[i+1] - prices[i];//4
                max_profit = max_profit + sell;//4
                }
            
            
        }
        return max_profit;
        
    }
};