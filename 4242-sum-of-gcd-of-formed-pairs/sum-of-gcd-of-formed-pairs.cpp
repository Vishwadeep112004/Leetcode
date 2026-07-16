class Solution {
public:
    long long gcdSum(vector<int>& a) 
    {
        int n=a.size();
        int mx=a[0];
        for(int i=0;i<n;i++)
        {
            mx=max(mx,a[i]);
            a[i]=gcd(a[i],mx);
        }

        sort(a.begin(),a.end());

        int i=0;
        int j=n-1;
        long long sum=0;
        while(i<j)
        {
            sum+=gcd(a[i],a[j]);
            i++;
            j--;
        }
        return sum;
    }
};