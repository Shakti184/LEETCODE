//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int minIteration(int N, int M, int x, int y){    
        // code here
        vector<vector<int>>g(N,vector<int>(M,0));
        g[x-1][y-1]=1;
        int c=0;
        queue<pair<int,int>>q;
        q.push({x-1,y-1});
        while(!q.empty()){
            int n=q.size();
            while(n--){
                int a=q.front().first,b=q.front().second;
                q.pop();
                if(a+1<N&&g[a+1][b]==0){q.push({a+1,b}); g[a+1][b]=1;}
                if(a-1>=0&&g[a-1][b]==0){q.push({a-1,b}); g[a-1][b]=1;}
                if(b+1<M&&g[a][b+1]==0){q.push({a,b+1}); g[a][b+1]=1;}
                if(b-1>=0&&g[a][b-1]==0){q.push({a,b-1}); g[a][b-1]=1;}
            }
            c++;
        }
        return c-1;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, M, x, y;
        cin >> N >> M;
        cin >> x >> y;
        
        Solution ob;
        cout << ob.minIteration(N, M, x, y) << endl;
    }
    return 0; 
} 
// } Driver Code Ends