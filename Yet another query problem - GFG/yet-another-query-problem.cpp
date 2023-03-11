//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> solveQueries(int N, int num, vector<int> &A, vector<vector<int>> &Q) {
        vector<int>v(N,0);
        map<int,int>mp;
        v[N-1]=1;
        mp[A[N-1]]++;
        for(int i=N-2;i>=0;i--){
            if(mp.find(A[i])==mp.end()){
                mp[A[i]]=1;
                v[i]=1;
            }else{
                mp[A[i]]++;
                v[i]=mp[A[i]];
            }
        }
        vector<int>ans;
        for(int i=0;i<num;i++){
            int l=Q[i][0],r=Q[i][1],f=Q[i][2],c=0;
            for(int j=l;j<=r;j++){
                if(v[j]==f) c++;
            }
            ans.push_back(c);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int num;
        cin>>num;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        vector<vector<int>> Q(num, vector<int>(3));
        for(int i=0;i<num;i++){
            for(int j=0;j<3;j++){
                cin>>Q[i][j];
            }
        }
        Solution obj;
        vector<int> res = obj.solveQueries(N, num, A, Q);
        
        for(auto ele:res){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}

// } Driver Code Ends