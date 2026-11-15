class Solution 
{
public:
    int numOfSubarrays(vector<int>& a) 
    {
        int sum=0;
        int even=1;
        int odd=0;
        long long cnt=0;
        int n=a.size();
        int mod=1e9+7;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            if(sum&1)
            {
                cnt+=even;
                odd++;
            }
            else 
            {
                cnt+=odd;
                even++;
            }
            cnt=cnt%(mod);
        }
        return cnt;
    }
};