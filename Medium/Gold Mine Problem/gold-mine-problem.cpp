//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        // code here
        vector<vector<int>>v(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            v[i][m-1]=M[i][m-1];
        }
        
        for(int j=m-2;j>=0;j--){
            for(int i=0;i<n;i++){
                if(i==0&&i+1<n){
                    v[i][j]=M[i][j]+max(v[i][j+1],v[i+1][j+1]);
                }else if(i==n-1&&i-1>=0){
                    v[i][j]=M[i][j]+max(v[i][j+1],v[i-1][j+1]);
                }else if(i+1<n&&i-1>=0){
                    v[i][j]=M[i][j]+max(v[i][j+1],max(v[i-1][j+1],v[i+1][j+1]));
                }else{
                    v[i][j]=M[i][j]+v[i][j+1];
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,v[i][0]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}
// } Driver Code Ends