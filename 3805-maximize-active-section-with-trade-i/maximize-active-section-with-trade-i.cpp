class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        vector<int> sec;
        int i=0;
        int n=s.size();
        int cnt=0;
        while(i<n && s[i]=='1')cnt++,i++;
        sec.push_back(cnt+1);
        while(i<n)
        {
            cnt=0;
            while(i<n && s[i]=='0')cnt++,i++;
            if(cnt)sec.push_back(cnt);
            cnt=0;
            while(i<n && s[i]=='1')cnt++,i++;
            if(cnt)sec.push_back(cnt);
        }
        if(s.back()=='1')sec[sec.size()-1]++;
        else sec.push_back(1);

        cnt=0;
        n=sec.size();
        for(int i=0;i<n;i+=2)cnt+=sec[i];
        cnt-=2;
        if(n<=3)return cnt;
        int ans=cnt;
        for(int i=1;i<n-2;i+=2)
        {
            ans=max(ans,cnt+sec[i]+sec[i+2]);
        }
        return ans;
    }
};