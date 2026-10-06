class Solution {
public:
    int minAddToMakeValid(string a) {
        int cnt=0;
        int ans=0;
        for(char ch:a)
        {
            if(ch=='(')cnt++;
            else 
            {
                if(cnt>0)cnt--;
                else
                {
                    ans++;
                }
            }
        }
        return ans+cnt;
    }
};