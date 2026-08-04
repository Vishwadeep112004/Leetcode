class Solution {
public:
    vector<int> findMissingElements(vector<int>& a) {
        sort(a.begin(),a.end());
        int sm=a[0];
        vector<int> ans;
        for(int i=0;i<a.size();i++)
        {
            while(sm!=a[i])
            {
                ans.push_back(sm++);
            }
            sm++;
        }
        return ans;
    }
};