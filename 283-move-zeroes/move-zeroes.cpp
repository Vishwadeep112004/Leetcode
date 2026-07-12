class Solution {
public:
    void moveZeroes(vector<int>& a) 
    {
        int i=0;
        int j=0;
        int n=a.size();
        while(j<n)
        {
            if(a[j]!=0)swap(a[i++],a[j]);
            j++;
        }   
    }
};