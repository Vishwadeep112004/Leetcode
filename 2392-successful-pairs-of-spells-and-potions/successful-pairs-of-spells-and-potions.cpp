class Solution {
    int bs(vector<int> &a, int x, long long k)
    {
        int i=0;
        int j=a.size()-1;
        int ind=-1;
        while(i<=j)
        {
            int m=(i+j)/2;
            if((long long)a[m]*x>=k)
            {
                ind=m;
                j=m-1;   
            }
            else i=m+1;
        }
        return (ind==-1)?0:(a.size()-ind);
    }
public:
    vector<int> successfulPairs(vector<int>& a, vector<int>& b, long long k) 
    {
        sort(b.begin(),b.end());
        vector<int> ans;
        int n=a.size();
        for(int i=0;i<n;i++)ans.push_back(bs(b,a[i],k));
        return ans;
    }
};