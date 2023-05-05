//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int t1 = 0;
        int t2 = 0;
        int t3 = 0;
        
        for(int i=0; i<n; i++){
            if (a[i] == 0){
                t1++; //2
            }
            
            if(a[i] == 1){
                t2++;
            }
            
            if(a[i] == 2){
                t3++;
            }
        }
        
        int i=0;
        while(i<n){
            
            if(t1>0){
                a[i] = 0;
                t1--;
                i++;
            }
            
            if(t1==0 and t2 > 0){
                a[i] = 1;
                t2--;
                i++;
            }
            
            if(t1==0 and t2==0 and t3 > 0){
                a[i] = 2;
                t3--;
                i++;
            }
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends