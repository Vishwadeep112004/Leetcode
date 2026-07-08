class Solution {
public:
    string mergeAlternately(string a, string b) {
        int i=0;
        int j=0;
        int k=1;
        int n=a.size();
        int m=b.size();
        string ans="";
        while(i<n && j<m)
        {
            if(k)ans+=a[i++];
            else ans+=b[j++];
            k=!k;
        }
        while(i<n)ans+=a[i++];
        while(j<m)ans+=b[j++];
        return ans;
    }
};