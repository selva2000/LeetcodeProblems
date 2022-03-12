class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> v;
        
        //sort(nums.begin(), nums.end());
        
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i] + nums[j] == target){
                v.push_back(i);
                v.push_back(j);
                break;
                //return v;
            }
                
            }
            
            
        }
        return v;    
    }
};