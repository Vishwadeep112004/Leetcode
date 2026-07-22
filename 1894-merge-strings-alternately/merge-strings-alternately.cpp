class Solution {
public:
    string mergeAlternately(string a, string b) 
    {
        int i=0;
        int j=0;
        int n=a.size();
        int m=b.size();
        string ans="";
        while(i<n && j<m)
        {
            ans+=a[i];
            ans+=b[j];
            i++;
            j++;
        }    
        while(i<n)
        {
            ans+=a[i];
            i++;
        }
        while(j<m)
        {
            ans+=b[j];
            j++;
        }
        return ans;
    }
};