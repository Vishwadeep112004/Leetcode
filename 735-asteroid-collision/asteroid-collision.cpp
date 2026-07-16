class Solution {
    void give(stack<int>& st, int x)
    {
        while(!st.empty())
        {
            int y=st.top();
            if(x<0 && y>0)
            {
                if(abs(x)>y)st.pop();
                else if(abs(x)==y)
                {
                    st.pop();
                    return;
                }
                else return;
            }
            else 
            {
                st.push(x);
                return;
            }
        }
        st.push(x);
    }
public:
    vector<int> asteroidCollision(vector<int>& a) 
    {
        stack <int> st;
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            give(st,a[i]);
        }   

        vector<int> ans;
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};