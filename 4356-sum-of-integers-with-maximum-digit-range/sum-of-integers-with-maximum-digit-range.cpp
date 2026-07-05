class Solution {

    int give(int n)
    {
        int mx=INT_MIN;
        int mn=INT_MAX;
        while(n)
        {
            int x=n%10;
            mx=max(x,mx);
            mn=min(x,mn);
            n/=10;
        }
        return mx-mn;
    }

public:
    int maxDigitRange(vector<int>& a) {
        int n=a.size();
        int mx=INT_MIN;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int diff=give(a[i]);
            if(mx==diff)ans+=a[i];
            if(mx<diff)
            {
                mx=diff;
                ans=a[i];
            }
        }
        return ans;
    }
};