class Solution {
public:
    string smallestPalindrome(string s) {
        map<char,int> mp;
        for(char ch:s)mp[ch]++;
        stack<pair<char,int>> st;
        char odd=' ';
        string ans="";
        for(auto [key,val]:mp)
        {
            int x=val/2;
            while(x--)ans+=key;
            if(val&1)odd=key;
            st.push({key,val/2});
        }
        if(odd!=' ')ans+=odd;
        while(!st.empty())
        {
            auto [key,val]=st.top();
            st.pop();
            while(val--)ans+=key;
        }
        return ans;
    }
};