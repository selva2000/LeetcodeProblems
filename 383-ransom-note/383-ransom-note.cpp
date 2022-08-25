class Solution {
public:
    
 
    
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char, int> m;
        
        for(int i=0; i<magazine.size(); i++){
            m[magazine[i]]++;
        }
        
        for(int j=0; j<ransomNote.size(); j++){
            
            if(m[ransomNote[j]] > 0){
                m[ransomNote[j]]--;
            } else {
                return false;
            }
        }
        
        return true;
        
    }
};