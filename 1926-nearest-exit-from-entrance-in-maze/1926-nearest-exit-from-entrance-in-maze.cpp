class Solution {
public:
    int nearestExit(vector<vector<char>>& mz, vector<int>& en) {
        int n=mz.size(),m=mz[0].size();
        int stx=en[0],sty=en[1];
        int c=INT_MAX;
        queue<pair<pair<int,int>,int>>q;
        q.push({{stx,sty},0});
        mz[stx][sty]='+';
        while(!q.empty()){
            int a=q.size();
            // cout<<a<<endl;
            while(a--){
                pair<pair<int,int>,int>p=q.front();
                q.pop();
                int x=p.first.first,y=p.first.second;
                int b=p.second;
                // cout<<"{"<<x<<","<<y<<"}"<<endl;
               
                if(b>0&&((x==0||x==n-1)||(y==0||y==m-1))){
                    return b;
                }
                    if(x+1<n&&mz[x+1][y]=='.'){
                        q.push({{x+1,y},b+1});
                        mz[x+1][y]='+';
                    }
                    if(x-1>=0&&mz[x-1][y]=='.'){
                        q.push({{x-1,y},b+1});
                        mz[x-1][y]='+';
                    }
                    if(y+1<m&&mz[x][y+1]=='.'){
                        q.push({{x,y+1},b+1});
                        mz[x][y+1]='+';
                    }
                    if(y-1>=0&&mz[x][y-1]=='.'){
                        q.push({{x,y-1},b+1});
                        mz[x][y-1]='+';
                    }
                   
            }
            
        }
        
        return -1;
    }
};


// [["+",".","+","+","+","+","+"]
// ,["+",".","+",".",".",".","+"],
//  ["+",".","+",".","+",".","+"],
//  ["+",".",".",".","+",".","+"],
//  ["+","+","+","+","+",".","+"]]
 
// [0,1]