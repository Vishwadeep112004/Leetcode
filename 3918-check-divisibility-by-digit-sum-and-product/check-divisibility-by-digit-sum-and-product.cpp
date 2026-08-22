class Solution {
public:
    bool checkDivisibility(int n) 
    {
        int copy=n;
        int sum=0;
        int pro=1;
        while(n)
        {
            int x=n%10;
            sum+=x;
            pro*=x;
            n/=10;
        }  
        // cout<<sum<<" "<<pro<<endl;  
        return !(copy%(sum+pro));
    }
};