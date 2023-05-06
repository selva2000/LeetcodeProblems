//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string modify (string s)
    {
        //code here.
        string del = " ";
        int id = s.find(" ");
        vector<string> ans;
        
        while(id != -1){
            ans.push_back(s.substr(0, id));
            s.erase(s.begin(), s.begin() + id + 1);
            id = s.find(" ");
        }
        
        ans.push_back(s.substr(0, id));
        
        string res;
        
        for(int i=0; i<ans.size(); i++){
            res = res + ans[i];
        }
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    cin.ignore ();
    while (t--)
    {
        string s;
        getline (cin, s);
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends