class Solution {
public:
    double findMaxAverage(vector<int>& a, int k) 
    {
        int n=a.size();
        int sum=0;
        int i=0;
        while(i<k)sum+=a[i++];
        double ans=(1.0*sum)/k;
        int j=0;
        while(i<n)
        {
            sum-=a[j];
            sum+=a[i];
            ans=max(ans,(1.0*sum)/k);
            i++;
            j++;
        }
        return ans;

    }
};