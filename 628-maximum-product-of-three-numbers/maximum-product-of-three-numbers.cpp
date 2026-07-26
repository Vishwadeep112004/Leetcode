class Solution {
public:
    int maximumProduct(vector<int>& a) {
        sort(a.begin(),a.end());
        int n=a.size();
        int ans=a[n-1]*a[n-2]*a[n-3];
        ans=max(ans,a[0]*a[1]*a[2]);
        ans=max(ans,a[0]*a[1]*a[n-1]);
        return ans;
    }
};