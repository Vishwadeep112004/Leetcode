class Solution {
public:
    int minFlips(int a, int b, int c) 
    {
        int i=1;
        int cnt=0;
        while(i<=max({a,b,c}))
        {
            int x=((a&i)==i);
            int y=((b&i)==i);
            int z=((c&i)==i);
            if(z)
            {
                if(!x && !y)cnt++;
            }
            else
            {
                if(x)cnt++;
                if(y)cnt++;
            }
            i<<=1;
        }
        return cnt;
    }
};