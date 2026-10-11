class Solution {
public:
    int sumOfSquares(vector<int>& a) 
    {
        int n=a.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(n%(i+1)==0)sum+=(a[i]*a[i]);
        }
        return sum;
    }
};