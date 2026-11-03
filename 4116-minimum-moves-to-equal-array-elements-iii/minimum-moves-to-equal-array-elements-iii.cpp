class Solution {
public:
    int minMoves(vector<int>& a) {
        int mx=*max_element(a.begin(),a.end());
        int ans=0;
        for(int i:a)
        {
            ans+=(mx-i);
        }
        return ans;
    }
};