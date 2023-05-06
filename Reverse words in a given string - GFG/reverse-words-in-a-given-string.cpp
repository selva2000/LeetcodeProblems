//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
            string reverseWords(string s) 
            { 
                // code here 
                    stack<string> st;
                    char letter;
                    string word = "";
                    string ans = "";
                    int temp = 0;
            
            
                    for(int i=0; i<s.size(); i++){
            
                        letter = s[i];
            
                        if(letter != '.'){
                            word = word + letter;
                        } else{
                            
                            st.push(word); //i -> like -> this -> prog -> very -> much.
                            word = "";
                            temp++; //5
                        }
                    }
            
                    st.push(word);
                    temp++;//6
            
                    while(!st.empty()){
            
                        if(temp != 1){
                            ans = ans + st.top() + ".";
                            st.pop();
                            temp--;
                        }else{
                            ans = ans + st.top();
                            st.pop();
                        }
                    
            }
            return ans; 
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends