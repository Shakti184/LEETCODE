class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<vector<int>>adj(n);
        for(int i=0;i<roads.size();i++){
            adj[roads[i][0]].push_back(roads[i][1]);
            adj[roads[i][1]].push_back(roads[i][0]);
        }

        int ans=INT_MIN;

        for(int i=0;i<n;i++){
            int x=adj[i].size();
            int z=0;
            for(int j=i+1;j<n;j++){
                int c=0;
                for(auto &k:adj[i])if(k==j)c=1;
              
               if(c==1){
                    z= max(z,int(adj[j].size())-1);
               }else{
                    z= max(z,int(adj[j].size()));
               }

            }
            ans=max(ans,z+x);
        }

        
        return ans;
        
    }
};