class Solution {
public:
    int minMoves(vector<int>& a) {
        int mx=0;
        int ans=0;
        int n=a.size();
        for(int i=0;i<n;i++)mx=max(mx,a[i]);
        for(int i=0;i<n;i++)ans+=(mx-a[i]);
        return ans;
    }
};