class Solution {
public:
    int minAddToMakeValid(string a) {
        int cnt1=0;
        int cnt2=0;
        for(int i=0;i<a.size();i++)
        {
            char ch=a[i];
            if(ch=='(')cnt1++;
            else 
            {
                if(cnt1>0)cnt1--;
                else cnt2++;
            }
            cout<<i<<" "<<cnt1<<endl;
        }
        return cnt1+cnt2;
    }
};