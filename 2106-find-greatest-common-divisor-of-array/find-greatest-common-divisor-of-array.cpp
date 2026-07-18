class Solution {
public:
    int findGCD(vector<int>& a) {
        int mn=a[0];
        int mx=a[0];
        for(int i:a)
        {
            mn=min(mn,i);
            mx=max(mx,i);
        }
        return gcd(mn,mx);
    }
};