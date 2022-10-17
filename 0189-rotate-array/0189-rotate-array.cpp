class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      
        int s = nums.size();
        
        if ((s == 0) || (k <= 0))
            {
                return;
            }
        
        vector<int> numsCopy(s);
        
        for (int i = 0; i < s; i++)
            {
                numsCopy[i] = nums[i];
            }
        
        for(int i=0; i<s; i++){
            
            /*if((i+k) >= s){
                int l = (i+k) - s;
                nums[l] =  numsCopy[i];
            } else{
                nums[i+k] =  numsCopy[i];
            }*/
            
            nums[(i + k)%s] = numsCopy[i];
        }

    }
    

};