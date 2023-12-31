//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    
    public:
       int solve(int ind, int sum, int n, int coins[], vector<vector<int>> &dp) {
        if(ind == n)
            return sum > 0 and (sum % 20 == 0 or sum % 24 == 0 or sum == 2024);
        
        if(sum > 0 and (sum % 20 == 0 or sum % 24 == 0 or sum == 2024))
            return 1;
            
        if(dp[ind][sum] != -1)
            return dp[ind][sum];
            
        return dp[ind][sum] = solve(ind + 1, sum, n, coins, dp) | solve(ind + 1, sum + coins[ind], n, coins, dp);
    }

    int isPossible(int n, int coins[]) {
        int sum = accumulate(coins, coins + n, 0);
        vector<vector<int>> dp(n + 1, vector<int> (sum + 1, -1));
        return solve(0, 0, n, coins, dp);
    }
    
};




//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int coins[N];
        for(int i=0 ; i<N ; i++)
            cin>>coins[i];

        Solution ob;
        cout << ob.isPossible(N,coins) << endl;
    }
    return 0;
}
// } Driver Code Ends