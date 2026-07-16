class Solution {
public:
    string decodeString(string a) 
    {
        int n=a.size();
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(a[i]>='0' && a[i]<='9')
            {
                int x=0;
                while(i<n && a[i]>='0' && a[i]<='9')
                    x=x*10+a[i++]-'0';

                i++;                // skip '['
                int cnt=1;
                string z="";

                while(i<n && cnt)
                {
                    if(a[i]=='[') cnt++;
                    else if(a[i]==']') cnt--;

                    if(cnt) z+=a[i];
                    i++;
                }

                z=decodeString(z);
                while(x--) ans+=z;
                i--;   
            }
            else ans+=a[i];
        }
        return ans;
    }
};