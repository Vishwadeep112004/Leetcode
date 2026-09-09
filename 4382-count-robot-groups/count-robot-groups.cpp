class Solution {
    int give(vector<int>&a)
    {
        int n=a.size();
        int cnt=0;
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]>a[i+1])a[i]=a[i+1];
            else cnt++;
        }
        return cnt+1;
    }
public:
    int countGroups(vector<int>& pos, vector<int>& speed, int k) {
        vector<int>a;
        vector<int>b;
        int n=pos.size();
        int i=0;
        while(i<n)
        {
            while(i<n-1&&pos[i+1]-pos[i]<=k)i++;
            a.push_back(pos[i]);
            b.push_back(speed[i]);
            i++;
        }
        if(a.size()==1)return 1;
        return give(b);
    }
};