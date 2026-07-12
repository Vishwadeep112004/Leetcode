class Solution {
    bool check(char ch) {
        ch=tolower(ch);
        return ch=='a'|| ch=='e'|| ch=='i' || ch=='o' || ch=='u';
    }
public:
    int maxVowels(string a, int k) {
        int n=a.size();
        int cnt=0;
        int i=0;
        while(i<k)if(check(a[i++]))cnt++;
        int ans=cnt;
        int j=0;
        while(i<n)
        {
            cnt+=(check(a[j]))?-1:0;
            cnt+=(check(a[i]))?1:0;
            ans=max(ans,cnt);
            i++;
            j++;
        }
        return ans;        
    }
};