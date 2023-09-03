class Solution {
public:
    int c=0;
    int solve(int i,int j,int m,int n,vector<vector<int>>&v){     
        if(i>=m||j>=n) return 0;
        if(i==m-1&&j==n-1) return 1;
        if(v[i][j]!=-1) return v[i][j];
        return v[i][j]=solve(i+1,j,m,n,v)+solve(i,j+1,m,n,v);
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>>v(m,vector<int>(n,-1));
        return solve(0,0,m,n,v);
    }
};