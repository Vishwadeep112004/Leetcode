class Solution {
public:
    int missingMultiple(vector<int>& a, int k) {
        int ans=k;
        set<int> st;
        for(int i:a)
        {
            if(i>=k && i%k==0)st.insert(i);
        }
        for(int i:st)
        {
            if(ans!=i)return ans;
            ans+=k;
        }
        return ans;
    }
};