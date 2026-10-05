class Solution 
{
    pair<int,int> give(string a, int i)
    {
        int n=a.size();
        int cnt=1;
        i++;
        int ans=0;
        pair<int,int> temp;
        while(i<n)
        {
            if(a[i]=='(')
            {
                temp=give(a,i);
                i=temp.second;
                ans+=temp.first;
            }
            else 
            {
                cnt--;
            }
            if(cnt==0)break;
            i++;
        }
        return {(ans!=0)?ans*2:1,i};
    }
public:
    int scoreOfParentheses(string a) 
    {
        pair<int,int> temp;
        int i=0;
        int n=a.size();
        int ans=0;
        while(i<n)
        {
            temp=give(a,i);
            i=temp.second+1;
            ans+=temp.first;
        }
        return ans;
    }
};