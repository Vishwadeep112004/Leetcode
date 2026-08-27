class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) 
    {
            vector<int> final;
            int i=0;
            int j=0;
            while(i<a.size() && j<b.size())
            {
                if(a[i]<=b[j])
                {
                    final.push_back(a[i]);
                    i++;
                }
                else 
                {
                    final.push_back(b[j]);
                    j++;
                }

            }
            while(i<a.size())final.push_back(a[i++]);
            while(j<b.size())final.push_back(b[j++]);
            j=0;
            while(j<final.size())cout<<final[j++]<<" ";
            cout<<endl;
            int n=final.size();
            if(n&1)
            {
                double ans=final[n/2];
                return ans;
            }
            else
            {
                cout<<final[n/2]<<" "<<final[n/2-1]<<endl;
                double ans=(1.0*(final[n/2]+final[n/2-1]))/2;
                return ans;
            }
    }
};