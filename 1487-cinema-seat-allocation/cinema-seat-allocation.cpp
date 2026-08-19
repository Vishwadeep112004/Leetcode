class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& temp) {
        map<int,vector<int>> mp;
        for(auto a:temp)mp[a[0]].push_back(a[1]);

        int ans=(n-mp.size())*2;

        for(auto [row,a]:mp)
        {
            bool x=true,y=true,z=true;

            for(int seat:a)
            {
                if(seat>=2 && seat<=5)x=false;
                if(seat>=4 && seat<=7)y=false;
                if(seat>=6 && seat<=9)z=false;
            }

            if(x && z)ans+=2;
            else if(x || y || z)ans++;
        }

        return ans;
    }
};