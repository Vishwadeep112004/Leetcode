class Solution {
public:
    string evaluate(string a, vector<vector<string>>& knowledge) 
    {
        unordered_map<string,string> mp;
        for(vector<string> v:knowledge)
        {
            string key=v[0];
            string val=v[1];
            mp[key]=val;
            // cout<<key<<val<<endl;
        }

        int i=0;
        int n=a.size();
        string ans="";
        while(i<n)
        {
            while(i<n && a[i]!='(')
            {
                ans+=a[i];
                i++;
            }
            string key="";
            i++;
            while(i<n && a[i]!=')')
            {
                key+=a[i];
                i++;
            }
            if(key!="")
            {
                if(mp.find(key)!=mp.end())ans+=mp[key];
                else ans+="?";
            }
            i++;
        }
        return ans;
    }
};