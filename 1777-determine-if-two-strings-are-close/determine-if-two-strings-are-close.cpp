class Solution {
public:
    bool closeStrings(string a, string b) {
        if (a.length() != b.length()) return false;

        int n = a.length();

        unordered_set<char> st1;
        unordered_set<char> st2;

        for (int i = 0; i < n; i++) {
            st1.insert(a[i]);
            st2.insert(b[i]);
        }

        if (st1 != st2) return false;

        vector<int> freq1(26, 0);
        for (int i = 0; i < n; i++) {
            freq1[a[i] - 'a']++;
        }

        int m = b.length();
        vector<int> freq2(26, 0);
        for (int i = 0; i < m; i++) {
            freq2[b[i] - 'a']++;
        }

        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        for (int i = 25; i >= 0; i--) {
            if (freq1[i] != freq2[i]) return false;
        }

        return true;
    }
};