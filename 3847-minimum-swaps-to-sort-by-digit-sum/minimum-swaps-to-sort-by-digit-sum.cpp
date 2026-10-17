
class Solution {
    int Sum(int n) {
        int sum=0;
        while(n) {
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
public:
    int minSwaps(vector<int>& a) {
        int n=a.size();
        vector<pair<int,int>> b(n);
        for(int i=0;i<n;i++) b[i]={Sum(a[i]),a[i]};
        vector<pair<int,int>> c=b;
        sort(c.begin(),c.end());
        unordered_map<int,int> pos;
        for(int i=0;i<n;i++) pos[a[i]]=i;
        int cnt=0;
        for(int i=0;i<n;i++) {
            if(b[i]!=c[i]) {
                int j=pos[c[i].second];
                pos[b[i].second]=j;
                pos[c[i].second]=i;
                swap(b[i],b[j]);
                cnt++;
            }
        }
        return cnt;
    }
};
