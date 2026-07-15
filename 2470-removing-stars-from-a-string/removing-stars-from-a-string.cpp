class Solution {
public:
    string removeStars(string a) 
    {
        int n=a.size();
        string ans="";
        int i=n-1;
        int cnt=0;
        while(i>=0)
        {
            while(i>=0 && a[i]=='*')cnt++,i--;
            while(i>=0 && a[i]!='*' && cnt>0)cnt--,i--;
            if(i>=0 && a[i]!='*')ans+=a[i];
            if(i>=0 && a[i]=='*')cnt++;
            i--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};