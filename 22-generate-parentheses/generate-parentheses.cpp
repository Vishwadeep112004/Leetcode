class Solution {
    set<string> st;
    void give(int open, int close, string a)
    {
        if(open==0 && close==0)
        {
            st.insert(a);
            return;
        }        
        if(open>0)give(open-1,close,a+"(");
        if(close>open)give(open,close-1,a+")");
    }
public:
    vector<string> generateParenthesis(int n) 
    {
        give(n,n,"");
        vector<string> ans;
        for(string s:st)ans.push_back(s);
        cout<<ans.size();
        return ans;
    }
};