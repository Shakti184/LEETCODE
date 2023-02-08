//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> findq(vector<vector<int>>&v){
        vector<int>ans;
        int n=v.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]==1)
                    ans.push_back(j+1);
            }
        }
        return ans;
    }
    
    bool isSafe(vector<vector<int>>&brd,int i_idx,int j_idx){
        
        for(int i=i_idx;i>=0;i--)
            if(brd[i][j_idx]==1) return false;
        
        for(int i=i_idx,j=j_idx;i>=0&&j>=0;i--,j--)
            if(brd[i][j]==1) return false;
        
        for(int i=i_idx,j=j_idx;i>=0&&j<brd.size();i--,j++)
            if(brd[i][j]==1) return false;
            
        return true;
        
    }

    void sol(vector<vector<int>>&brd,int idx,vector<vector<int>>&ans){
        if(idx==brd.size()){
            vector<int>res=findq(brd);
            ans.push_back(res);
            return;
        }
        for(int j=0;j<brd.size();j++){
            
            if(isSafe(brd,idx,j)){
                brd[idx][j]=1;
                sol(brd,idx+1,ans);
                brd[idx][j]=0;
            }
            
        }
    }
    vector<vector<int>> nQueen(int n) {
        // code here
        if(n==1) return {{1}};
        if(n==2||n==3) return {};
        vector<vector<int>>ans;
        vector<vector<int>>brd(n,vector<int>(n,0));
        sol(brd,0,ans);
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
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends