class Solution {
    #define append push_back
    void give(vector<vector<int>> &a, int n)
    {
        if(n==0)return;
        vector<int> temp;
        vector<int> x;
        x.append(0);
        int size=a[a.size()-1].size();
        for(int i=0;i<size;i++)x.append(a[a.size()-1][i]);
        x.append(0);
        size=x.size();
        for(int i=0;i<size-1;i++)
        {
            temp.append(x[i]+x[i+1]);
        }
        a.append(temp);
        n--;
        give(a,n);
    }

public:
    vector<vector<int>> generate(int n) 
    {
        vector<vector<int>> ans={{1}};
        give(ans,n-1);
        return ans;
    }
};