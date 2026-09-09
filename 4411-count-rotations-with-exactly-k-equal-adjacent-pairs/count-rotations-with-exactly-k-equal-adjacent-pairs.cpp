class Solution {
    int give(string a, int i, int j, int k)
    {
        int cnt=0;
        while(i<j-1)
        {
            if(a[i]==a[i+1])cnt++;
            i++;
        }
        return cnt==k;
    }
public:
    int countRotations(string a, int k) 
    {
        int n=a.size();
        a+=a;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=give(a,i,i+n,k);
        }
        return ans;
    }
};