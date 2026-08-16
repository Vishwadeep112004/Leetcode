class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& a) {
        int n=a.size();
        int m=a[0].size();
        vector<vector<int>> b(m,vector<int>(n));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                b[j][i]=a[i][j];
            }
        }
        return b;
    }
};