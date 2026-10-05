class Solution {
    vector<string> ans;
    void give(int open, int close, string a)
    {
        if(open==0 && close==0)
        {
            ans.push_back(a);
            return;
        }
        if(open!=0)give(open-1,close, a+"(");
        if(open<close && close!=0)give(open,close-1,a+")");
    }
public:
    vector<string> generateParenthesis(int n) 
    {
        give(n,n,"");
        return ans;
    }
};