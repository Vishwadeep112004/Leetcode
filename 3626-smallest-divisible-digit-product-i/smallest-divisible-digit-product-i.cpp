class Solution {
    bool check(int n, int k)
    {
        long long pro=1;
        while(n)
        {
            pro*=n%10;
            n/=10;
        }
        return pro%k==0;
    }
public:
    int smallestNumber(int n, int t) {
        while(true)
        {
            if(check(n,t))return n;
            n++;
        }
        return -1;
    }
};