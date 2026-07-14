class Solution {
    bool check(vector<vector<int>> &a, int r, int c)
    {
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            if(a[i][c]!=a[r][i])return false;
        }
        return true;
    }
public:
    int equalPairs(vector<vector<int>>& a) 
    {
        int n=a.size();
        int m=a[0].size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(check(a,i,j))cnt++;
            }
        }
        return cnt;
    }
};