class Solution {
public:
    int ans = 0;

    void dfs(int node, int parent, vector<vector<int>>& adj,
             unordered_set<long long>& st)
    {
        for (int next : adj[node])
        {
            if (next == parent) continue;

            long long key = 1LL * node * 100000 + next;

            if (st.count(key))
                ans++;

            dfs(next, node, adj, st);
        }
    }

    int minReorder(int n, vector<vector<int>>& connections)
    {
        vector<vector<int>> adj(n);
        unordered_set<long long> st;

        for (auto &e : connections)
        {
            int u = e[0];
            int v = e[1];

            adj[u].push_back(v);
            adj[v].push_back(u);

            st.insert(1LL * u * 100000 + v);
        }

        dfs(0, -1, adj, st);

        return ans;
    }
};