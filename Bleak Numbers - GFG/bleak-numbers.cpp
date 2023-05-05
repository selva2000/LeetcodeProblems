//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	int countSetBits(int x)
{
    unsigned int count = 0;
    while (x > 0) {
        if(x & 1 == 1) count++;
        x = x >> 1;
    }
    return count;
}
 
// Returns true if n is Bleak
int is_bleak(int n)
{
    // Check for all numbers 'x' smaller
    // than n.  If x + countSetBits(x)
    // becomes n, then n can't be Bleak
    for (int x = 1; x < n; x++)
        if (x + countSetBits(x) == n)
            return 0;
 
    return 1;
}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_bleak(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends