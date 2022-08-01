class Solution {
public:
    
    int solve(int i, int j, int m, int n, vector<vector<int>> &dp){
        
        //int ans;
        
        //base case
        if(i == m-1 and j == n-1){
            return 1;
        }
        
        // if(a[i][j]!=0){
        //     return 1;
        // }
        
        //boundry condition
        if(i > m-1 or j > n-1){
            return 0;
        }
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        //down
        int down = solve(i+1, j, m, n, dp); 
        
        //right
        int right = solve(i, j+1, m, n, dp);
        
        
        //upper
        
        //lower
        
        return dp[i][j] = down + right;
        
        
    }
    
    int uniquePaths(int m, int n) {
        
       vector<vector<int>> dp(m,vector<int>(n,-1));
        
        return solve(0, 0, m, n, dp);
        
    }
};