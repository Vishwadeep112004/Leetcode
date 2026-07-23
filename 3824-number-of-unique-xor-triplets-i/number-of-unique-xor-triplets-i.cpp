class Solution {
public:
    int uniqueXorTriplets(vector<int>& a) {
        int n=a.size();
        if(n<=2)return n;
        // int i=1;
        // while(i<=n)i<<=1;
        // i>>=1;
        // int x=(log(i)/log(2))+1;
        // return 1<<x;
        int cnt=0;
        while(n)
        {
            n>>=1;
            cnt++;
        }
        return 1<<cnt;
    }
};