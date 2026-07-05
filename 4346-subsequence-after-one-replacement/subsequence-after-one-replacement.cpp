class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        int n=s.size();
        int dp0=0,dp1=-1;

        for(char c:t){
            int ndp0=dp0,ndp1=dp1;

            if(dp0<n && s[dp0]==c)
                ndp0=dp0+1;

            if(dp0<n)
                ndp1=max(ndp1,dp0+1);

            if(dp1!=-1 && dp1<n && s[dp1]==c)
                ndp1=max(ndp1,dp1+1);

            dp0=ndp0;
            dp1=ndp1;
        }

        return dp0==n || dp1==n;
    }
};