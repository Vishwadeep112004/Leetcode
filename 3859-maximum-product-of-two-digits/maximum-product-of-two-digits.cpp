class Solution {
public:
    int maxProduct(int n) {
        string a=to_string(n);
        char mx='0';
        char smx='0';
        for(char ch:a)
        {
            if(mx<ch)
            {
                smx=mx;
                mx=ch;
            }
            else if(smx<ch)
            {
                smx=ch;
            }
        }
        return (mx-'0')*(smx-'0');
    }
};