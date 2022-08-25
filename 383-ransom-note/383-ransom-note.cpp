class Solution {
public:
    
 
    
    bool canConstruct(string ransomNote, string magazine) {
    
        
//This is one solution
/*         unordered_map<char, int> m;
        
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
        
        return true;*/
        
        //using include() function.
        //To use it we need tos ort it before
        
    sort(ransomNote.begin(), ransomNote.end());
    sort(magazine.begin(), magazine.end());
    return includes(magazine.begin(), magazine.end(), ransomNote.begin(), ransomNote.end());
        
    }
};