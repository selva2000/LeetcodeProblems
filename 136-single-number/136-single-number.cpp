class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        
        //Brute force
        //TC - O(N), SC- O(N)
        /*unordered_map<int, int> mp;
        
        int n = nums.size();
        
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        
        int ans;
        
        for(auto x: mp){
            
            if(x.second == 1){
                ans = x.first;
                break;
            }
        }
        
        return ans;*/
        
        //Opimized
        int n = nums.size();
        int ans = 0;
        
        for(int i=0; i<n; ++i){
            ans = ans ^ nums[i];
        }
        
        return ans;
        
        
        
        
        
    }
};