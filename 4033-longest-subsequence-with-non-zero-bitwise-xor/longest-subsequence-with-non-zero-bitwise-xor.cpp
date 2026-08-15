class Solution {
    vector<int> dp;
    int give(vector<int> &a, int i, int x)
    {
        int n=a.size();
        if(i==n-1) return (x^a[i])?1:0;
        if(dp[i]!=-1)return dp[i];
        int take=give(a,i+1,x^a[i])+1;
        int nottake=give(a,i+1,x);
        return dp[i]=max(take,nottake);
    }

public:
    int longestSubsequence(vector<int>& a) 
    {
        dp.assign(a.size(),-1);
        int n=a.size();
        int cnt=0;
        for(int i=0;i<n;i++)if(!a[i])cnt++;
        if(cnt==n)return 0;
        return give(a,0,0);
    }
};
