class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> v;
        
        //sort(nums.begin(), nums.end());
        
        //O(N^2)
        /*for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i] + nums[j] == target){
                v.push_back(i);
                v.push_back(j);
                break;
                //return v;
            }                
            }
        }*/
        
        //Optimized oprach to O(N)
       unordered_map<int, int> indices;
        for (int i = 0; i < nums.size(); i++) {
            if (indices.find(target - nums[i]) != indices.end()) {
                return {indices[target - nums[i]], i};
            }
            indices[nums[i]] = i;
        }
        return {};
    }
};