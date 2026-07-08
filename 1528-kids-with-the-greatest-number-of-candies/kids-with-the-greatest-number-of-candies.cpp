class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& a, int t) 
    {
        int mx=0;
        for(int i:a)mx=max(i,mx);
        vector<bool> ans;
        for(int i:a)ans.push_back(mx<=i+t);
        return ans;    
    }
};