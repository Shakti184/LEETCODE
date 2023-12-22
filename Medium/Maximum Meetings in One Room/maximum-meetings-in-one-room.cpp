//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
        vector<pair<int,int>>pr;
        for(int i=0;i<N;i++){
            pr.push_back({F[i],i+1});
        }
        sort(pr.begin(),pr.end());
        vector<int>ans;
        int end=-1;
        for(int i=0;i<N;i++){
            int idx=pr[i].second;
            if(end==-1){
                ans.push_back(idx);
                end=F[idx-1];
            }else{
                if(S[idx-1]>end){
                    ans.push_back(idx);
                    end=F[idx-1];
                }
            }
            
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends