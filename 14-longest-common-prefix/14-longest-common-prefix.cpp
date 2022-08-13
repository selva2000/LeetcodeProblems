class Solution {
public:
    
    string inner_elements(string a, string b){
        
        string ans = "";
        
        for(int j=0; j<a.size(); j++){
                if(a[j] == b[j]){
                   ans = ans + a[j];
                } else{
                    break;
                }
            }
        return ans;
    }
    
    string longestCommonPrefix(vector<string>& strs) {
           
            if(strs.size() == 1){
                return strs[0];
            }        
        
            string a = strs[0];
            string b = strs[1];
            
            
                
            
            int count = strs.size() - 2;
            //string c = "";
        
        
            string c = inner_elements(a, b);
            if(c == ""){
                return "";
            }
        
            int i = 2;

        
            while(count!=0){
                c = inner_elements(c, strs[i]); 
                i++;
                count--;
            }
        
        return c;
        
        
        
    }
};