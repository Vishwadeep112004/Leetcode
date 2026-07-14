class Solution {
public:
    int largestAltitude(vector<int>& a) {
        int mx=0;
        int x=0;
        for(int i:a)
        {
            x+=i;
            mx=max(x,mx);
        }
        return mx;

        
    }
};