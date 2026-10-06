class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a)
    {
        int n=a.size();
        sort(a.begin(),a.end());
        vector<vector<int>> ans;
        ans.push_back({a[0][0],a[0][1]});
        for(int i=1;i<n;i++)
        {
            int len=ans.size();
            if(ans[len-1][1]>=a[i][0])
            {
                int int0=ans[len-1][0];
                int int1=ans[len-1][1];
                ans.pop_back();
                ans.push_back({min(int0,a[i][0]),max(int1,a[i][1])});
            }
            else ans.push_back(a[i]);
        }
        return ans;
    }
};