class Solution {
public:
    bool check(vector<int>& nums) {
        
        /*int n = nums.size();
        
        vector<int> copied_nums;
        for(int i=0; i<n; i++){
            copied_nums.push_back(nums[i]);
        }
        
        //copy(nums.begin(), nums.end(), back_inserter(copied_nums));
        
        sort(nums.begin(), nums.end());//1,2,3,4,5
        int flag = 0;
        vector<int> nums_dup;
        
        for(int i=0; i<n-1; i++){
            nums_dup = rotate_vector(nums, flag, n);
            flag++;//1
            for(int j=0; j<nums_dup.size()-1; j++){
                if(nums_dup[j] == copied_nums[j]){
                    return true;
                }else{
                    break;
                }
            }            
        }
        
        return false;
        
    }
    
    vector<int> rotate_vector(vector<int> nums, int flag, int n){
        vector<int> rotated_vect;
        
        if(flag == 0){
            return nums;
        }
        else{
            for(int i=0; i<n-1; i++){
                rotated_vect[i] = nums[(i+flag) % n];
            }
            return rotated_vect;
        }*/
         int count=0;
        int n=nums.size();
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[(i+1)%n])count++;
        }
        
        return count<=1;
    }
};