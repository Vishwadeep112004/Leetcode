class Solution {
    map<char,vector<int>> mp1;
    map<char,vector<int>> mp2;
    vector<vector<int>> dp;

    int check(vector<int> &a, int x)
    {
        int i=0;
        int j=a.size()-1;
        int ind=-1;

        while(i<=j)
        {
            int m=(i+j)/2;

            if(x<=a[m])
            {
                ind=m;
                j=m-1;
            }
            else
                i=m+1;
        }

        return (ind!=-1)?a[ind]:ind;
    }

    int give(string &a, string &b, int i, int j)
    {
        if(i>=a.size() || j>=b.size())return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        int ans=0;
        if(mp2.find(a[i])!=mp2.end())
        {
            int ind=check(mp2[a[i]],j);
            if(ind!=-1)ans=give(a,b,i+1,ind+1)+1;
        }

        if(mp1.find(b[j])!=mp1.end())
        {
            int ind=check(mp1[b[j]],i);
            if(ind!=-1)ans=max(ans,give(a,b,ind+1,j+1)+1);
        }
        ans=max(ans,give(a,b,i+1,j+1));
        return dp[i][j]=ans;
    }

public:
    int longestCommonSubsequence(string text1, string text2)
    {
        int n=text1.size();
        int m=text2.size();
        dp.assign(n,vector<int>(m,-1));
        for(int i=0;i<n;i++)mp1[text1[i]].push_back(i);
        for(int i=0;i<m;i++)mp2[text2[i]].push_back(i);
        return give(text1,text2,0,0);
    }
};