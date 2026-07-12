class Solution {
public:
    int maxOperations(vector<int>& a, int k) 
    {
        int i=0;
        int j=a.size()-1;
        sort(a.begin(),a.end());
        int cnt=0;
        while(i<j)
        {
            if(a[i]+a[j]==k)
            {
                cnt++;
                i++;
                j--;
            }
            else if(a[i]+a[j]>k)j--;
            else i++;
        }    
        return cnt;
    }
};