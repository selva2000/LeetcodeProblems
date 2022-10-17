class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        
        /*int n = nums.size();
        int cnt = 0;
        
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                cnt++;
            }
        }
        
        int temp = 0;
        int count = 0;
        int j;
        
        for(int i=0; i<n; i++){
            for(j=1; j<n; j++){
                if(nums[j]!=0){
                    temp = nums[j];
                    nums[j] = nums[i];
                    nums[i] = temp;
                    count++;
                    break;   
                }
                
            }
            if(count == n-cnt){
                break;
            }
        }*/
        
        int n = nums.size();
        int cnt = 0;
        
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                cnt++;
            }
        }
        
        int count = 0;
        
        for(int i=0; i<n; i++){
            if(nums[i]!=0){
                nums[count] = nums[i];
                count++;
            }
        }
        
        int k = n - cnt;
        
        fill(nums.begin() + k, nums.end(), 0);
        
        
    }
};