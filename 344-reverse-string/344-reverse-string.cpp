class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int i = 0;
        int j = s.size()-1;
        char t;
        
        while( i <= j){
            
            //s[i] = s[j];
            t = s[i];
            s[i] = s[j];
            s[j] = t;
            i++;
            j--;
        }
        
        
    }
};