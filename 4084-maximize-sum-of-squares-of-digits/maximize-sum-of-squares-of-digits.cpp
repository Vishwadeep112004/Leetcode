class Solution {
public:
    string maxSumOfSquares(int n, int sum) {
        string a="";
        while(n>0)
        {
            if(sum>9)
            {
                a+=('0'+9);
                sum-=9;            }
            else 
            {
                a+=('0'+sum);
                sum=0;
            }
            n--;
        }
        return (sum==0)?a:"";

    }
};