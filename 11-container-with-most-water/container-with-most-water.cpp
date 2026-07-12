class Solution {
public:
    int maxArea(vector<int>& a) 
    {
        int i=0;   
        int j=a.size()-1;
        int area=min(a[i],a[j])*(j-i);
        while(i<j)
        {
            if(a[i]<a[j])i++;
            else j--;
            area=max(area,min(a[i],a[j])*(j-i));
        } 
        return area;
    }
};