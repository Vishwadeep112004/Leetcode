class Solution {
    vector<int> dx = {1, -1, 0, 0};
    vector<int> dy = {0, 0, 1, -1};

    vector<vector<int>> dp;

    bool dfs(vector<vector<int>>& grid, int health, int r, int c) {
        int n = grid.size();
        int m = grid[0].size();

        if (health <= 0) return false;
        if (r == n - 1 && c == m - 1) return true;
        if (dp[r][c] >= health) return false;
        dp[r][c] = health;

        for (int k = 0; k < 4; k++) {
            int nr = r + dx[k];
            int nc = c + dy[k];

            if (nr >= 0 && nr < n && nc >= 0 && nc < m) {
                int newHealth = health - grid[nr][nc];
                if (dfs(grid, newHealth, nr, nc))
                    return true;
            }
        }

        return false;
    }

public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int n = grid.size();
        int m = grid[0].size();

        dp.assign(n, vector<int>(m, -1));

        return dfs(grid, health - grid[0][0], 0, 0);
    }
};