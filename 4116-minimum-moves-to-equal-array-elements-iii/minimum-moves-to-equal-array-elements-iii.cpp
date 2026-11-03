class Solution {
public:
    int minMoves(vector<int>& a) {
        int mx=*max_element(a.begin(),a.end());
        int ans=0;
        int n=a.size();
        for(int i=0;i<n;i++)ans+=(mx-a[i]);
        return ans;
    }
};