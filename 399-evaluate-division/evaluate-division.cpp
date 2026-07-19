class Solution {
    bool flag=false;
    double dfs(unordered_map<string,vector<pair<string,double>>> &adj,string u, string v, unordered_map<string,bool> &vis)
    {
        if(u==v)
        {
            flag=true;
            return (double)(1);
        }
        vis[u]=true;
        double ans=1;
        vector<pair<string,double>> a=adj[u];
        for(auto [next,w]:a)
        {
            if(vis.find(next)==vis.end())
            {
                double temp=dfs(adj,next,v,vis)*w;
                if(flag)return temp;
            }
        }
        return -1;
    }


public:
    vector<double> calcEquation(vector<vector<string>>& edges, vector<double>& weights, vector<vector<string>>& queries) {
        unordered_map<string,vector<pair<string,double>>> adj;
        int n=edges.size();
        for(int i=0;i<n;i++)
        {
            string u=edges[i][0];
            string v=edges[i][1];
            double w=weights[i];
            adj[u].push_back({v,w});
            adj[v].push_back({u,1.0/w});
        }
        vector<double> ans;
        for(vector a:queries)
        {
            unordered_map<string,bool> vis;
            string u=a[0];
            string v=a[1];
            if(adj.find(u)==adj.end() || adj.find(v)==adj.end())ans.push_back((double)(-1));
            else if(v==u)ans.push_back(1);
            else ans.push_back(dfs(adj,u,v,vis));
            flag=false;
        }
        return ans;
    }
};