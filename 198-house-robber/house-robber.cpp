class Solution {
int give(vector<int> &a, int ind, vector<int> &dp)
    {
        if(ind<0)return 0;
        if(dp[ind]!=-1)return dp[ind];
        int left=give(a,ind-2,dp)+a[ind];
        int right=give(a,ind-1,dp);
        return dp[ind]=max(left,right);
    }


public:
    int rob(vector<int>& a) 
    {
        vector<int> dp(a.size(),-1);
        // return give(a,a.size()-1,dp); for recursion sol
        // for tabulation 
        int n=a.size();  
        if(n == 0) return 0;
        if(n == 1) return a[0];
        // if(n==2)return max(a[0],a[1])
        dp[0]=a[0];
        dp[1]=max(a[0],a[1]);
        for(int i=2;i<n;i++)
        {
            dp[i]=max(a[i]+dp[i-2],dp[i-1]);
        }
        return dp[n-1];
    }
};