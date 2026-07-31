class Solution {
public:
    int minimumPushes(string a) {
        int n=a.size();
        int i=0;
        int cnt=0;
        int j=1;
        map<char,int> mp;
        while(i<n && i<8)
        {
            if(mp.find(a[i])==mp.end()) mp[a[i]]=j; 
            cnt+=mp[a[i]];
            i++;
        }
        j++;
        while(i<n && i<8+8)
        {
            if(mp.find(a[i])==mp.end()) mp[a[i]]=j; 
            cnt+=mp[a[i]];
            i++;
        }
        j++;
        while(i<n && i<8+8+8)
        {
            if(mp.find(a[i])==mp.end()) mp[a[i]]=j; 
            cnt+=mp[a[i]];
            i++;
        }
        j++;
        while(i<n && i<8+8+8+8)
        {
            if(mp.find(a[i])==mp.end()) mp[a[i]]=j; 
            cnt+=mp[a[i]];
            i++;
        }
        return cnt;
    }
};