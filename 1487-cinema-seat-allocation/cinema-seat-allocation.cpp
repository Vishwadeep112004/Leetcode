class Solution {

    bool bs(vector<int>& a,int l,int r)
    {
        for(int i=0;i<a.size();i++)if(a[i]>=l && a[i]<=r)return false;
        return true;
    }
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& temp) {
        sort(temp.begin(),temp.end());
        map<int,vector<int>> mp;
        for(vector<int> a:temp)mp[a[0]].push_back(a[1]);
        int ans=0;
        for(auto [row, a]:mp)
        {
            if(a.size()==1)
            {
                int ind=a[0];
                if(ind<2 || ind>9)ans+=2;
                else ans+=1;
                continue;
            }
            if(a.size()>=7)continue;
            bool x=bs(a,2,5);
            bool y=bs(a,4,7);
            bool z=bs(a,6,9);
            if(x && z)ans+=2;
            else if(x || y || z)ans+=1;
        }
        int pre=0;
        for(auto [row,a]:mp)
        {
            ans+=(row-pre-1)*2;
            pre=row;
        }
        ans+=(n-pre)*2;
        return ans;        

    }
};