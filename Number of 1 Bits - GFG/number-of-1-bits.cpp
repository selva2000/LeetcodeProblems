//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        
        //converting integer into binary.
        int cnt = 0;
        int arr[64];
        int i = 0;
        
        while(N != 0){
            arr[i] = N%2;
            i++;
            cnt++;
            N = N/2;
        }
        
        int temp = 0;
        
        for(int i = 0; i<cnt; i++){
            if(arr[i] == 1){
                temp++;
            }
        }
        
        return temp;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}

// } Driver Code Ends