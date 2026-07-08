class Solution {
public:
    string reverseVowels(string s) {
        string temp="";
        for(char ch:s)
        {
            char x=tolower(ch);
            if(x=='a' || x=='i' || x=='o' || x=='e' || x=='u')temp+=ch;
        }
        reverse(temp.begin(),temp.end());

        string ans="";
        int i=0;
        for(char ch:s)
        {
            char x=tolower(ch);
            if(x=='a' || x=='i' || x=='o' || x=='e' || x=='u')ans+=temp[i++];
            else ans+=ch;
        }
        return ans;
    }
};