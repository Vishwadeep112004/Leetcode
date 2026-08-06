class Solution {
    vector<vector<int>> ans;
    vector<int> temp;
    void give(int k, int n, int i)
    {
        if(k==0)
        {
            if(temp.size() && n==0)ans.push_back(temp);
            return;
        }

        if(i>n || i>=10)return;
        if(i<=n)
        {
            temp.push_back(i);
            give(k-1,n-i,i+1);
            temp.pop_back();
            give(k,n,i+1);
        }

    }
public:
    vector<vector<int>> combinationSum3(int k, int n) 
    {
        // vector<vector<int>> ans;
        give(k,n,1);
        return ans;
    }
};