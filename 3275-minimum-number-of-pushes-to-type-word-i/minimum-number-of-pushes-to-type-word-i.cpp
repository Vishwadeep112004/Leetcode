class Solution {
public:
    int minimumPushes(string a) {
        int n=a.size();
        int i=0;
        int cnt=0;
        int j=1;
        while(i<n && i<8)cnt+=j,i++;
        j++;
        while(i<n && i<8+8)cnt+=j,i++;
        j++;
        while(i<n && i<8+8+8)cnt+=j,i++;
        j++;
        while(i<n && i<8+8+8+8)cnt+=j,i++;
        return cnt;
    }
};