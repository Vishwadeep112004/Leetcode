class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        vector<vector<int>> ans;
        sort(a.begin(),a.end());
        ans.push_back(a[0]);

        for(auto i:a){
            if(ans.back()[1]>=i[0]){
                ans.back()[1]=max(ans.back()[1],i[1]);
            }
            else{
                ans.push_back(i);
            }
        }
        return ans;
    }
};