class Solution {
public:
    bool dfs (vector<vector<char>>& bd, string wd,int i,int j,int n){
        if(n==wd.size()) return true;
        if(i<0||i>=bd.size()||j<0||j>=bd[0].size()||wd[n]!=bd[i][j]) return false;
        bd[i][j]='*';
        bool st=dfs(bd,wd,i+1,j,n+1)||dfs(bd,wd,i-1,j,n+1)||
                dfs(bd,wd,i,j+1,n+1)||dfs(bd,wd,i,j-1,n+1);
        bd[i][j]=wd[n];
        return st;
    }
    bool exist(vector<vector<char>>& bd, string wd) {
        int n=bd.size(),m=bd[0].size();

        int x=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(bd[i][j]==wd[0]&&dfs(bd,wd,i,j,0)) return true;
            }
        }
        return false;
    }
};