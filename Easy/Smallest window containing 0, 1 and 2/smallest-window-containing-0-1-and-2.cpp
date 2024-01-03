//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
        // Code here
        int n=S.size();
        
        int ans=INT_MAX;
        
        int a=-1,b=-1,c=-1;
        
        for(int i=0;i<n;i++){
            if(S[i]=='0')a=i;
            else if(S[i]=='1')b=i;
            else c=i;
            if(a!=-1&&b!=-1&&c!=-1){
                ans=min(ans,max(a,max(b,c))-min(a,min(b,c))+1);
            }
        }
        
        
        if(ans==INT_MAX) return -1;
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends