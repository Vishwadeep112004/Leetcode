class Solution {
public:
    int lengthOfLongestSubstring(string a) 
    {
        int i=0;
        int j=0;
        int len=0;
        int cnt=0;
        unordered_map<char,int> mp;
        int n=a.size();
        while(j<n)
        {
            mp[a[j]]++;
            cnt++;
            while(mp.size()!=cnt)
            {
                mp[a[i]]--;
                cnt--;
                if(mp[a[i]]==0)mp.erase(a[i]);
                i++;
            }
            len=max(cnt,len);
            j++;
        }
        return len;
    }
};