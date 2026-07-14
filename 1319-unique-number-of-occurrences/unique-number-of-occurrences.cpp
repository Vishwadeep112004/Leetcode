class Solution {
public:
    bool uniqueOccurrences(vector<int>& a) 
    {
        unordered_map<int, int> mp;
        for(int i:a)mp[i]++;
        unordered_set<int> st;
        for(auto [key,val]:mp)
        {
            if(st.count(val)!=0)return false;
            st.insert(val);
        }   
        return true;
    }
};