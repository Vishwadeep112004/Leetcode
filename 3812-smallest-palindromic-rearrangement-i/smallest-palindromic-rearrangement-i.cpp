class Solution {
public:
    string smallestPalindrome(string s) {
        map<char,int> mp;
        for(char ch:s)mp[ch]++;
        char odd=' ';
        string ans="";
        for(auto [key,val]:mp)
        {
            int x=val/2;
            while(x--)ans+=key;
            if(val&1)odd=key;
        }
        string r=ans;
        if(odd!=' ')ans+=odd;
        reverse(r.begin(),r.end());
        return ans+r;
    }
};