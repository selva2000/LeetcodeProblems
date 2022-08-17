class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string> morse{
            ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."
        };
        
//         int b=0;
//         string a = "";
//         string c = "";
//         vector<string> ans;
        
//         for(int i=0; i<words.size(); i++){
//             for(int j=0; j<words.size(); j++){
                
//                 int b = words[i][j] - 'a';//2
//                 string a = morse[b];
//                 c = c + a; //concatenation happens!             
//             }
//             ans.push_back(a);
//         }
        
//         int temp=0;
//         int count=0;
        
//         for(int i=0; i<ans.size(); i++){
//             for(int j=0; j<ans.size(); j++){
                
//                 if(ans[i][j] == ans[i+1][j]){
//                     temp++;
//                 } else{
//                     break;
//                 }
                
//                 count = count + 1;
//             }
//         }
        
//         return count;
        
//         return ans.size();
        
//         unordered_map<string,int> map;
//         string ans ="";
        
//         for(int i=0; i<words.size(); i++){
//             for(int j=0; j<words[i].size(); j++){
//                 ans = ans + morse[words[i][j] - 'a']; 
//             }
//              map[ans] = 1;
            
//         }
        
//         return map.size();
        
        unordered_map<string,int> um;

  	for (int i=0; i< words.size(); i++) {
  		string st;
  		for (int j=0; j<words[i].size(); j++) st += morse[words[i][j] - 'a'];
  		um[st]=1;
  	 }

  return um.size ();
  }
        
};