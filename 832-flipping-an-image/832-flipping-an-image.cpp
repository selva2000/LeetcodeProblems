class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        //reverse(image.begin(), image.end());
        
        int row = image.size();
        
        
        vector<vector<int>> ans( row , vector<int> (row, 0));;
        
        for(int i=0; i<image.size(); i++){
            
            int a = 0;
            
            for(int j=image[i].size()-1; j>=0; j--){
                
                 ans[i][a] = image[i][j];
                    a++;
            }
        }
        
        for(int i=0; i<ans.size(); i++){
            
            for(int j=0; j<ans.size(); j++){
                
                    ans[i][j] = ans[i][j] ^ 1;   
            }
        }
        
        return ans;
    }
};