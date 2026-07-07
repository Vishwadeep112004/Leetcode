class Solution {
public:
    long long sumAndMultiply(int n) {
        string a=to_string(n);
        int sum=0;
        long long ans=0;
        for(char ch:a)
        {
            if(ch!='0')
            {
                int x=ch-'0';
                sum+=x;
                ans=ans*10+x;
            }
        }
        return ans*sum;

    }
};