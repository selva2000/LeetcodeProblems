class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        /*int curr_product = 1, res = INT_MIN;
       
       for (auto i: nums) {
           curr_product = curr_product * i;
           res = max(curr_product, res);
           if(curr_product == 0) {
               curr_product = 1;
           }
       }
       
       curr_product = 1;
       
       for (int i = nums.size()-1; i>=0; i--) {
           curr_product = curr_product * nums[i];
           res = max(curr_product, res);
           if(curr_product == 0) {
               curr_product = 1;
           }      
       }
       return res;*/
        
        
        if(nums.size()==1)
          return nums[0];
        int curr_max=nums[0];
        int curr_min=nums[0]; 
        int prev_min=nums[0]; 
        int prev_max=nums[0]; 
        int ans=nums[0];
        for(int i=1;i<nums.size();i++)
        {
          curr_max=max(nums[i]*prev_max,max(nums[i]*prev_min,nums[i]));
          curr_min=min(nums[i]*prev_min,min(nums[i]*prev_max,nums[i]));
          ans=max(ans,curr_max); 
          prev_min=curr_min; 
          prev_max=curr_max;
        } 
        return ans;
    }
};