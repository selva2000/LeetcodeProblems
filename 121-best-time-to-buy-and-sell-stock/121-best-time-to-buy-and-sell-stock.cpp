class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        /*stack<int> s;
        int n = prices.size();
        int span[0] = 1;
        
        for(int i=1; i<n-1; i++){
            
            int currentPrice = prices[i];
            
            if(!s.empty() and prices[s.top()]<=currentPrice){
                s.pop();
            }
            
            if(!s.empty()){
                int previousHighest = s.top();
                
            }
            
            span[i] = ;
        }*/
        
        int buy = prices[0];
        /*int max_profit = 0;
        
        int n = prices.size();
        
        for(int i=1; i<n; i++){
            
            if(buy > prices[i]){
                buy = prices[i];
            }
            
            int profit_calc = prices[i] - buy;
            
            if(profit_calc > max_profit){
                max_profit = profit_calc;
            }
        }
        
        return max_profit;*/
        
        //Kadane's Approach for asolving this problem
        
        int n = prices.size();
        int max_current = 0;
        int max_soFar = 0;
        
        for(int i=1; i<n; i++){
            
            max_current = max(0, max_current += prices[i] - prices[i-1]);
            max_soFar = max(max_soFar, max_current);
        }
        return max_soFar;
        
    }
};