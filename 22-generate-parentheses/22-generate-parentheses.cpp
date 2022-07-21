class Solution {
public:
    void generate_brackets(vector<string> &out, int n, int idx, string current,int open, int close){
        
        //base case
        if(idx == 2*n){
            //out[idx] == '\0';
            //out.push_back();
            //cout<<out<<endl;
            out.push_back(current);
            return;
        }
        
        //rec case
        //2 cases
        
        if(open < n){
            
            //out.push_back("(");
            generate_brackets(out, n, idx+1, current+"(", open+1, close);
        }
        
        if(close < open){
            
            //out.push_back(")");
            generate_brackets(out, n, idx+1, current+")", open, close+1);
        }
        
        //return;
        
    }
    
    vector<string> generateParenthesis(int n) {
        
        vector<string> out;
        generate_brackets(out, n, 0,"", 0, 0);
        return out;
        
        
        
    }
};