class Solution {
private:
    vector<bool>vis;// For dfs
    vector<bool>pathVis;// For cycle Detection
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int>res;
        vector<vector<int>>adj(n);
        vis.resize(n);
        pathVis.resize(n);

        // Create adjacency list
        for(int node=0;node<n;node++)
        {
            for(auto edge : graph[node])
                adj[node].push_back(edge);       
        }

        for(int node=0;node<n;node++)
        {
            if(dfs(node,adj))// if dfs returns safe(true) add it to answer
                res.push_back(node);
        }
        return res;
    }
private:
    bool dfs(int node,vector<vector<int>> &adj)
    {
        if(this->vis[node] && this->pathVis[node])
            return false;
        else if(this->vis[node])
        {
            return true;
        }
        else
        {
            this->vis[node] = true, this->pathVis[node] = true;
            bool flag = true;
            for(auto child : adj[node])
            {
                flag = dfs(child,adj);
                if(!flag)break;
            }
            if(flag)
            {
                pathVis[node] = false;
                return true;
            }
            return false;
        }
    }
};