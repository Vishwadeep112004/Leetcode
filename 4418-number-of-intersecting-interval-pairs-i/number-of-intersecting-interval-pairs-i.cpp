class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& a) 
    {
        int n=a.size();
        int cnt=0;
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i][1]>=a[j][0])cnt++;
            }
        }
        return cnt;
    }
};