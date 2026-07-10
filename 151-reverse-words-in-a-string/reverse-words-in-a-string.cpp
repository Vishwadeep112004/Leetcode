class Solution {
public:
    string reverseWords(string s) {
        vector<string> a;
        int i=0;
        int n=s.size();
        while(i<n)
        {
            while(i<n && s[i]==' ')i++;
            string temp="";
            while(i<n && s[i]!=' ')temp+=s[i++];
            if(!temp.empty())a.push_back(temp);
        }
        reverse(a.begin(),a.end());
        string ans="";
        for(int i=0;i<a.size();i++)
        {
            if(i==a.size()-1)ans+=a[i];
            else ans+=(a[i]+" ");
        }
        return ans;
    }
};