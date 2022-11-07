class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int cs=0;//current_sum
        int ms=INT_MIN;//Lowest possible value{maximum_sum}
        
        
        for(int i=0; i<nums.size(); i++){
            cs = cs + nums[i];
            ms = max(cs,ms);
            
            if(cs < 0){
                cs = 0;
            }
            
        }
        return ms;
    }
};