class Solution {
    vector<int> dp;
    int give(vector<int> &a, int ind)
    {
        if(ind>=a.size())return 0;
        if(dp[ind]!=-1)return dp[ind];
        return dp[ind]=min(give(a,ind+1)+a[ind],give(a,ind+2)+a[ind]);
    }
public:
    int minCostClimbingStairs(vector<int>& a) {
        dp.assign(a.size(),-1);
        return min(give(a,0),give(a,1));
    }
};