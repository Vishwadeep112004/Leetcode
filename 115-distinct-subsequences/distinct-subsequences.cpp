class Solution {
    
    int give(string &a, string &b, int i, int j,vector<vector<int>> &dp)
    {
        int n=a.size();
        int m=b.size();
        if(j>=m)return 1;
        if(i>=n)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int cnt=0;
        if(a[i]==b[j])cnt+=give(a,b,i+1,j+1,dp);
        cnt+=give(a,b,i+1,j,dp);
        return dp[i][j]=cnt;
    }
public:
    int numDistinct(string s, string t) {
        vector<vector<int>> dp(1000,vector<int>(1000,-1));
        return give(s,t,0,0,dp);
    }
};