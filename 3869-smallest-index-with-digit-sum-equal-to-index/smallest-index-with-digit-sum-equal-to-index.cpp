class Solution {
    int sum(int x)
    {
        int s=0;
        while(x)
        {
            s+=x%10;
            x/=10;
        }
        return s;
    }
public:
    int smallestIndex(vector<int>& a) 
    {
        for(int i=0;i<a.size();i++)
        {
            if(sum(a[i])==i)return i;
        }
        return -1;
    }
};