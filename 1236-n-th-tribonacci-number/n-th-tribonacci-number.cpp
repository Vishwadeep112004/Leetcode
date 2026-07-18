class Solution {
    map<int,int> dp;
    int give(int n)
    {
        if(n==0)return 0;
        if(n<=2)return 1;
        if(dp.find(n)!=dp.end())return dp[n];
        return dp[n]=tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
    }
    
public:
    int tribonacci(int n) {
        return give(n);
    }
};