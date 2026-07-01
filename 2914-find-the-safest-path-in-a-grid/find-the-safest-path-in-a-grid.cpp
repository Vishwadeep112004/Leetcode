class Solution {
    bool bfs(vector<vector<int>>& dist, int limit)
    {
        int n = dist.size();

        if(dist[0][0] < limit) return false;

        queue<pair<int,int>> q;
        vector<vector<int>> vis(n, vector<int>(n,0));

        q.push({0,0});
        vis[0][0] = 1;

        int dx[] = {1,-1,0,0};
        int dy[] = {0,0,1,-1};

        while(!q.empty())
        {
            auto [x,y] = q.front();
            q.pop();

            if(x == n-1 && y == n-1)
                return true;

            for(int k=0;k<4;k++)
            {
                int nx = x + dx[k];
                int ny = y + dy[k];

                if(nx>=0 && nx<n &&
                   ny>=0 && ny<n &&
                   !vis[nx][ny] &&
                   dist[nx][ny] >= limit)
                {
                    vis[nx][ny] = 1;
                    q.push({nx,ny});
                }
            }
        }

        return false;
    }

public:
    int maximumSafenessFactor(vector<vector<int>>& grid)
    {
        int n = grid.size();

        vector<vector<int>> dist(n, vector<int>(n, INT_MAX));
        queue<pair<int,int>> q;

        // Multi-source BFS
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    dist[i][j]=0;
                    q.push({i,j});
                }
            }
        }

        int dx[]={1,-1,0,0};
        int dy[]={0,0,1,-1};

        while(!q.empty())
        {
            auto [x,y]=q.front();
            q.pop();

            for(int k=0;k<4;k++)
            {
                int nx=x+dx[k];
                int ny=y+dy[k];

                if(nx>=0 && nx<n &&
                   ny>=0 && ny<n &&
                   dist[nx][ny]==INT_MAX)
                {
                    dist[nx][ny]=dist[x][y]+1;
                    q.push({nx,ny});
                }
            }
        }

        int low=0, high=2*n;
        int ans=0;

        while(low<=high)
        {
            int mid=(low+high)/2;

            if(bfs(dist,mid))
            {
                ans=mid;
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }

        return ans;
    }
};