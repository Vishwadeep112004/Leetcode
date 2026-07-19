class Solution {
public:
    string smallestSubsequence(string s) {
        stack<char> st;
        vector<int> vis(26,0);
        map<char,int> mp;
        for(int i=0;i<s.size();i++) mp[s[i]]=i;
        for(int i=0;i<s.size();i++)
        {
            while(!vis[s[i]-'a'] && !st.empty() && mp[st.top()]>i && s[i]<st.top())
            {
                vis[st.top()-'a']=0;
                st.pop();
            }   
            if(!vis[s[i]-'a'])
            {
                st.push(s[i]);
                vis[s[i]-'a']=1;
            }
        }

        string ans="";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }

        reverse(ans.begin(),ans.end());
        return ans;

    }
};