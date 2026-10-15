class Solution {
public:
    int sumCounts(vector<int>& a) 
    {
        int n=a.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            unordered_set<int> st;
            for(int j=i;j<n;j++)
            {
                st.insert(a[j]);
                cnt+=st.size()*st.size();
            }
        }
        return cnt;
    }
};