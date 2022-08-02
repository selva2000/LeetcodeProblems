class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> ans(m*n);
        
        int p = 0;
        
        for(int i=0; i<m; i++){
            
            for(int j=0; j<n; j++){
                
                ans[p] = matrix[i][j];
                p++;
            }
        }
        
        sort(ans.begin(), ans.end());
        
        return ans[k-1];
        
    }
};