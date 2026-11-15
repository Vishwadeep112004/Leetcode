class Solution 
{
public:
    int numOfSubarrays(vector<int>& a) 
    {
        int sum=0;
        int even=1;
        int odd=0;
        long long cnt=0;
        int mod=1e9+7;
        for(int i:a)
        {
            sum+=i;
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