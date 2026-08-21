class Solution {
public:
    vector<int> intersect(vector<int>& a, vector<int>& b) 
    {
        map<int,int> mp1;
        map<int,int> mp2;
        for(int i:a)mp1[i]++;
        for(int i:b)mp2[i]++;
        vector<int> ans;
        for(auto [val, freq]:mp1)
        {
            if(mp2.find(val)!=mp2.end())
            {
                int x=freq+mp2[val]-max(freq,mp2[val]);
                while(x--)
                {
                    ans.push_back(val);
                }
            }
        }
        return ans;
    }
};