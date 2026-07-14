class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& a, vector<int>& b) 
    {
        map<int,int> mp1;
        map<int,int> mp2;
        for(int i:a)mp1[i]++;
        for(int i:b)mp2[i]++;
        vector<int> temp1;
        vector<int> temp2;
        for(auto [key,freq]:mp1) if(mp2.find(key)==mp2.end())temp1.push_back(key);
        for(auto [key,freq]:mp2) if(mp1.find(key)==mp1.end())temp2.push_back(key);
        return {temp1,temp2};
    }
};