class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        const long long mod = 1000000007;

        int sum = 0, cnt = 0;
        long long ans = 0;

        vector<pair<long long,long long>> temp;
        vector<int> c;
        vector<long long> p(s.size()+1,1);

        for(int i=1;i<=s.size();i++)
            p[i]=(p[i-1]*10)%mod;

        int i=0;
        while(i<s.size())
        {
            if(s[i]!='0')
            {
                int x=s[i]-'0';
                sum+=x;
                cnt++;
                ans=(ans*10+x)%mod;
            }
            temp.push_back({ans,sum});
            c.push_back(cnt);
            i++;
        }

        vector<int> res;

        for(auto v:queries)
        {
            int l=v[0];
            int r=v[1];

            long long num,sum1;

            if(l==0)
            {
                num=temp[r].first;
                sum1=temp[r].second;
            }
            else
            {
                int k=c[r]-c[l-1];
                num=(temp[r].first-temp[l-1].first*p[k]%mod+mod)%mod;
                sum1=temp[r].second-temp[l-1].second;
            }

            res.push_back((num*sum1)%mod);
        }

        return res;
    }
};