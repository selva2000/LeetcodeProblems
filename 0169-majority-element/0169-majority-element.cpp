class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int, int> mp;
        
        for(int i:nums){
            mp[i]++;
        }
        
        int max_value = nums[0];
        
        for(auto i:mp){
            
            if(i.second > mp[max_value]){
                max_value = i.first;
            }
        }
        
        return max_value;
        
    }
};