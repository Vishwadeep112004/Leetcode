class Solution {
public:
    string removeOuterParentheses(string a) {
        int n=a.size();
        int cnt=0;
        int i=0;
        string ans="";
        while(i<n)
        {
            int flag=0;
            if(a[i]=='(')
            {
                if(cnt==0)flag=1;
                cnt++;
            }
            else cnt--;
            if(cnt!=0 && !flag)ans+=a[i];
            i++;
        }
        return ans;
    }
};