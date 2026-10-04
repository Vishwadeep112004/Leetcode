class Solution {
    vector<vector<int>> dp;
    bool isValid(string a,int i, int cnt)
    {
        int n=a.size();
        if(i==n)return cnt==0;
        if(dp[i][cnt]!=-1)return dp[i][cnt];
        if(a[i]=='(')return dp[i][cnt]=isValid(a,i+1,cnt+1);
        else if(a[i]=='*')
        {
            return dp[i][cnt] =
                isValid(a,i+1,cnt+1) ||
                isValid(a,i+1,cnt) ||
                (cnt>0 && isValid(a,i+1,cnt-1));
        }
        else if(cnt>0)return dp[i][cnt] = isValid(a,i+1,cnt-1);
        return dp[i][cnt] = false;
    }
public:
    bool checkValidString(string s) 
    {
        dp.assign(101,vector<int>(101,-1));
        return isValid(s,0,0);
    }
};