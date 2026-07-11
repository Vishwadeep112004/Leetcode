class Solution {
    vector<vector<int>> adj;
    vector<int> vis;
    void dfs(int node, vector<int>& temp)
    {
        vis[node]=1;
        temp.push_back(node);
        for(int n:adj[node])if(!vis[n])dfs(n,temp);
    }
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        adj.resize(n);
        vis.assign(n,0);
        for(auto vec:edges)
        {
            int u=vec[0];
            int v=vec[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<vector<int>> comp;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                vector<int> temp;
                dfs(i,temp);
                comp.push_back(temp);
            }
        }

        int ans=0;

        for(vector vec:comp)
        {
            int cnt=vec.size()-1;
            int flag=0;
            for(int i:vec)
            {
                if(cnt!=adj[i].size())
                {
                    flag=1;
                    break;
                }
            }
            if(!flag)ans++;

            
        }
        return ans;
    }
};