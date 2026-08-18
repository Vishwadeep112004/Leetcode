class Solution {
    int give(vector<int>&a)
    {
        map<int,int> mp;
        for(int i=0;i<a.size();i++)mp[a[i]]++;
        int mx=-1;
        for(auto [key,val]:mp)if(val==1)mx=max(mx,key);
        return mx;
    }
public:
    int largestInteger(vector<int>&a,int k)
    {
        if(k==1)return give(a);
        if(k==a.size())return *max_element(a.begin(),a.end());

        int n=a.size();
        map<int,int>mp;
        for(int i=0;i<n;i++)mp[a[i]]++;
        int mx=-1;
        if(mp[a[0]]==1)mx=max(mx,a[0]);
        if(mp[a[n-1]]==1)mx=max(mx,a[n-1]);
        return mx;
    }
};