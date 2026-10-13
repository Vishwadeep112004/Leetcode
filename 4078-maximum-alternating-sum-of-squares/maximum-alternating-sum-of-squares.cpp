class Solution {
public:
    long long maxAlternatingSum(vector<int>& a) 
    {
        for(int &i:a)i=abs(i);
        sort(a.begin(),a.end());   
        int n=a.size();
        int j=n/2;
        long long sum=0;
        int i=0;
        while(i<j)
        {
            sum-=(a[i]*a[i]);
            i++;
        }
        while(j<n)
        {
            sum+=(a[j]*a[j]);
            j++;
        }
        return sum;
    }
};