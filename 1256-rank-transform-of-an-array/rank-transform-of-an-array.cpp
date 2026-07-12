class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& a) {
        int n=a.size();
        map<int,int> mp;
        for(int i=0;i<n;i++)mp[a[i]]=1;
        vector<int> temp;
        for(auto [key,val]:mp)temp.push_back(key);
        for(int i=0;i<temp.size();i++)
        {
            mp[temp[i]]=i+1;
        }
        for(int i=0;i<n;i++)a[i]=mp[a[i]];
        return a;
    }

};