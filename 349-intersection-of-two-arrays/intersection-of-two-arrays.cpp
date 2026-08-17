class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st;
        for(int i:nums1)st.insert(i);
        set<int> ans;
        for(int i:nums2)if(st.count(i))ans.insert(i);
        vector<int> res;
        for(int i:ans)res.push_back(i);
        return res;
    }
};