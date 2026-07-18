class Solution 
{
    vector<string> p={"abc","def","ghi","jkl","mno","prqs","tuv","wxyz"};
    vector<string> ans;
    void give(string a, int i, string final)
    {
        if(i==a.size())
        {
            ans.push_back(final);
            return;
        }
        int ind=(a[i]-'0')-2;
        for(int k=0;k<p[ind].size();k++)
        {
            give(a,i+1,final+p[ind][k]);
        }
    }
public:
    vector<string> letterCombinations(string a) 
    {
        give(a,0,"");
        return ans;
    }
};