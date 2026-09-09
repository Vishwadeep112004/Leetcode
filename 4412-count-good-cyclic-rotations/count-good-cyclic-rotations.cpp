class Solution {
public:
    int countGoodRotations(vector<int>& a) 
    {
        int n=a.size();
        for(int i=0;i<n;i++)a.push_back(a[i]);
        long long s1=0;
        long long s2=0;
        for(int i=0;i<n/2;i++)
        {
            s1+=a[i];
            s2+=a[n/2+i];
        }   
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(s1>s2)ans++;
            s1-=a[i];
            s1+=a[n/2+i];
            s2-=a[n/2+i];
            s2+=a[n+i];

        }   
        return ans;
    }
};