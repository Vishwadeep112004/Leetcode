class Solution {
    int give(vector<int> &a)
    {
        int n=a.size();
        int i=0;
        int ans=1;
        while(i<n)
        {
            int cnt=1;
            while(i<n-1 && a[i+1]>a[i])
            {
                cnt++;
                i++;
            }
            ans=max(cnt,ans);
            i++;
        }
        return ans;
    }
public:
    int longestMonotonicSubarray(vector<int>& nums) 
    {
        int inc=give(nums);
        reverse(nums.begin(),nums.end());
        int dec=give(nums);
        return max(inc,dec);
    }
};