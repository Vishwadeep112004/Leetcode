class Solution 
{
public:
    bool canPlaceFlowers(vector<int>& a, int m) 
    {
        a.push_back(0);
        a.push_back(1);
        reverse(a.begin(),a.end());
        a.push_back(0);
        a.push_back(1);
        int k=0;
        int i=0;
        int n=a.size();
        while(i<n)
        {
            double cnt=0;
            while(i<n && a[i++]==0)cnt++;
            if(cnt>2)
            {
                cnt-=2;
                k+=(ceil(cnt/2));
            }
        }
        return k>=m;
    }
};