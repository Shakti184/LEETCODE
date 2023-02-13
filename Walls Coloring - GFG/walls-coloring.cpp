//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int minCost(vector<vector<int>> &col, int N) {
        // Write your code here.
        int ans=INT_MAX;
        for(int i=1;i<N;i++){
            int a=col[i-1][0],b=col[i-1][1],c=col[i-1][2];
            col[i][0]+=min(b,c);
            col[i][1]+=min(a,c);
            col[i][2]+=min(a,b);
        }
        int a=col[N-1][0],b=col[N-1][1],c=col[N-1][2];
        ans=min(a,min(b,c));
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        vector<vector<int>> colors(n, vector<int>(3));
        for (int i = 0; i < n; i++)
            cin >> colors[i][0] >> colors[i][1] >> colors[i][2];
            
        Solution ob;
        cout << ob.minCost(colors, n) << endl;    
    }
}
// } Driver Code Ends