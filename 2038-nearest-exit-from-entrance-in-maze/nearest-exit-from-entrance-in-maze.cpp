class Solution {
public:
    int bfs(vector<vector<char>>& grid, int x, int y)
    {
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int,int>> q;
        vector<vector<int>> vis(n, vector<int>(m, 0));

        q.push({x, y});
        vis[x][y] = 1;

        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};
        int cnt=0;
        while(!q.empty())
        {
            int sz=q.size();
            while(sz--){
            auto it = q.front();
            q.pop();

            int r = it.first;
            int c = it.second;
            if((r==0 || r==n-1 || c==0 || c==m-1) && !(r==x && c==y))return cnt;
            for(int k = 0; k < 4; k++)
            {
                int nr = r + dx[k];
                int nc = c + dy[k];

                if(nr >= 0 && nr < n &&
                   nc >= 0 && nc < m &&
                   !vis[nr][nc] && grid[nr][nc]!='+')
                {
                    vis[nr][nc] = 1;
                    q.push({nr, nc});
                }
            }
            }
            cnt++;
        }
        return -1;
    }
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        return bfs(maze,entrance[0],entrance[1]);
    }
};