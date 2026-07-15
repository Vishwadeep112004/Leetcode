class Solution {
public:
    string removeStars(string a) 
    {
        string ans = "";

        for(char ch : a)
        {
            if(ch == '*')
                ans.pop_back();
            else
                ans += ch;
        }

        return ans;
    }
};