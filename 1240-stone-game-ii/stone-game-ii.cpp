class Solution {
    int n;
    int dp[101][101];
    vector<int> suff;

    int give(vector<int>& piles, int i, int m)
    {
        if(i>=n)
            return 0;

        if(dp[i][m]!=-1)
            return dp[i][m];

        int ans=0;

        for(int x=1; x<=2*m && i+x<=n; x++)
        {
            int taken=suff[i]-suff[i+x];

            int opponent=give(piles,i+x,max(m,x));

            int curr=taken+(suff[i+x]-opponent);

            ans=max(ans,curr);
        }

        return dp[i][m]=ans;
    }

public:
    int stoneGameII(vector<int>& piles)
    {
        n=piles.size();

        suff.resize(n+1,0);

        for(int i=n-1; i>=0; i--)
            suff[i]=suff[i+1]+piles[i];

        memset(dp,-1,sizeof(dp));

        return give(piles,0,1);
    }
};