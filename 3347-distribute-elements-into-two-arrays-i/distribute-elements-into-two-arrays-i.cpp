class Solution {
public:
    vector<int> resultArray(vector<int>& a) {
        vector<int>arr1;
        vector<int>arr2;
        arr1.push_back(a[0]);
        arr2.push_back(a[1]);
        for(int i=2;i<a.size();i++)
        {
            if(arr1.back()>arr2.back())arr1.push_back(a[i]);
            else arr2.push_back(a[i]);
        }
        vector<int> ans;
        for(int i=0;i<arr1.size();i++)ans.push_back(arr1[i]);
        for(int i=0;i<arr2.size();i++)ans.push_back(arr2[i]);
        return ans;
    }
};