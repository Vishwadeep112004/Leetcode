class Solution {
public:
    int maximumLengthSubstring(string a) 
    {
        int k=2;
        unordered_map<char,int> mp;
        int n=a.size();
        int i=0;
        int j=0;
        int len=0;
        int cnt=0;
        while(j<n)
        {
            mp[a[j]]++;
            if(mp[a[j]]>k)cnt++;
            if(cnt==0)len=max(len,j-i+1);
            if(cnt!=0)
            {
                if(mp[a[i]]>k)cnt--;
                mp[a[i]]--;
                i++;
            }
            j++;
        }
        return len;
    }
};