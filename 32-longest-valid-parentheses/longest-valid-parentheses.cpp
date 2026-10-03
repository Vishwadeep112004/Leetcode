class Solution {
    vector<pair<int,int>> intervals(string a)
    {
        int n=a.size();
        stack<int> st;
        vector<pair<int,int>> vec;
        int i=0;
        while(i<n)
        {
            int srt=-1;
            int end=-1;
            while(i<n && a[i]=='(')
            {
                st.push(i);
                i++;
            }
            while(i<n && a[i]==')' && !st.empty())
            {
                srt=st.top();
                end=i;
                st.pop();
                i++;
            }
            if(srt!=-1 && end!=-1){
                vec.push_back({srt,end});
                i--;
            }
            i++;
        }
        return vec;
    }


    int give(vector<pair<int,int>>& a)
    {
        if(a.size()==0)return 0;
        int len=0;
        int i=0;
        int n=a.size();
        while(i<n)
        {
            len=max(a[i].second-a[i].first+1,len);
            if(i!=0)
            {
                if(a[i-1].second+1==a[i].first)
                {
                    a[i].first=a[i-1].first;
                    len=max(a[i].second-a[i].first+1,len);
                }
                else if(a[i-1].first<a[i].first && a[i-1].second>a[i].second)
                {
                    a[i].first=a[i-1].first;
                    a[i].second=a[i-1].second;
                }
            }
            i++;
        }
        return len;
    }

public:
    int longestValidParentheses(string a) 
    {
        int n=a.size();
        if(n<=1)return 0;
        stack<int> st;
        vector<pair<int,int>> vec=intervals(a);
        sort(vec.begin(),vec.end());
        for(auto [first,second]:vec)
        {
            cout<<first<<" "<<second<<endl;
        }
        return give(vec);
    }
};