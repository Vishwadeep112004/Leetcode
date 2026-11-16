class Solution {
    string sum(string a)
    {
        int n=0;
        for(char i:a) n+=(i-'0');
        return to_string(n);
    }
public:
    string digitSum(string s, int k) 
    {
        int n=s.size();
        if(n<=k)return s;
        string newstr="";
        for(int i=0;i<n;i++)
        {
            string temp="";
            int j=i;
            while(i<min(j+k,n))temp+=s[i],i++;
            newstr+=sum(temp);
            i--;
        }
        return digitSum(newstr,k);
    }
};