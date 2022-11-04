class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
         vector<int>v;
        int n=nums.size();
        unordered_map<int,int>mp;
        
        //calculating frequency of each element
        for(int i=0;i<n;++i)
        {
         mp[nums[i]]++;
        }
        
        // checking which element freq is > n/3 
        for(auto it:mp)
        {
            if(it.second>(n/3))
            {
                v.push_back(it.first);
            }
        }
        return v;
    
    }
};