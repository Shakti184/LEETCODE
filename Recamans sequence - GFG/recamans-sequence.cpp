//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    int sol(vector<int>&dp,int n){
        if(n==0) return dp[0];
        // if(n==1) return dp[1];
        if(dp[n]!=-1) return dp[n];
        int x=sol(dp,n-1)-n;
        int c=0;
        for(int i=0;i<dp.size();i++){
            if(dp[i]==x)c=1;
        }
        if(x>0&&c==0) dp[n]=x;
        else dp[n]=sol(dp,n-1)+n;
    }
    vector<int> recamanSequence(int n){
        // code here
        vector<int>dp(n+1,-1);
        dp[0]=0;
        dp[1]=1;
        sol(dp,n);
        return dp;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends