//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int totalCuts(int N,int K,vector<int> &A){
        // Code here
        vector<int>l(N),r(N);
        int ma=0;
        int mi=INT_MAX;
        for(int i=0;i<N;i++)
        {
            ma=max(ma,A[i]);
            mi=min(mi,A[N-1-i]);
            l[i]=ma;
            r[N-i-1]=mi;
        }
        int ans=0;
        for(int i=0;i<N-1;i++)
        if(l[i]+r[i+1]>=K)
        ans++;
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution ob;
        cout<<ob.totalCuts(N,K,A)<<endl;
    }
    return 0;
}
// } Driver Code Ends