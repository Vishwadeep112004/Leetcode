class Solution {
        int longestOnes(vector<int>& a, int k) 
    {
        int i=0;
        int j=0;
        int cnt=0;
        int len=0;
        int n=a.size();
        while(j<n)
        {
            if(a[j]==0)cnt++;
            if(cnt<=k)len=max(len,j-i+1);
            if(cnt>k)
            {
                if(a[i]==0)cnt--;
                i++;
            }
            j++;
        }  
        return len;  
    }
public:
    int longestSubarray(vector<int>& a) 
    {
        return longestOnes(a,1)-1;
    }
};