class Solution {
public:
    int minOperations(vector<int>& a, int x) 
    {
        int sum=accumulate(a.begin(),a.end(),0);
        x=sum-x;

        if(x==0)return a.size();

        int i=0;
        int j=0;
        int n=a.size();
        sum=0;
        int mx_len=-1;

        while(j<n)
        {
            sum+=a[j];

            while(i<j && sum>x)
            {
                sum-=a[i];
                i++;
            }

            int len=j-i+1;

            if(sum==x)
                mx_len=max(mx_len,len);

            j++;
        }

        return (mx_len!=-1)?n-mx_len:-1;
    }
};