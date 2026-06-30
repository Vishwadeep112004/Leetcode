class Solution {
    vector<int>vis;
    int dfs(vector<vector<pair<int,int>>> &adj, int node)
    {
        int mn=INT_MAX;
        vis[node]=1;
        for(auto[v,weight]:adj[node])
        {
            mn=min(weight,mn);
            if(!vis[v])
            {
                mn=min({mn,dfs(adj,v)});
            }
        }
        return mn;
    }
public:
    int minScore(int n, vector<vector<int>>& roads) 
    {
        vector<vector<pair<int,int>>> adj(n+1);
        vis.assign(n+1,0);
        for(auto V:roads)
        {
            int u=V[0];
            int v=V[1];
            int weight=V[2];
            adj[u].push_back({v,weight});
            adj[v].push_back({u,weight});
        }

        return dfs(adj,1);
    }
};