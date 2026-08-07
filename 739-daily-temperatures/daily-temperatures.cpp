class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& a) 
    {
        int n=a.size();
        vector<int> ans(n);
        stack<pair<int,int>> st;
        int i=0;
        while(i<n)
        {
            while(!st.empty() && st.top().first<a[i])
            {
                auto [val,ind]=st.top();
                st.pop();
                ans[ind]=i-ind;
            }
            st.push({a[i],i});
            i++;
        }
        return ans;
    }
};