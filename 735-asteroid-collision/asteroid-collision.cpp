class Solution {
    void give(stack<int>& st, int x) {
        while (!st.empty() && st.top() > 0 && x < 0) {
            if (st.top() < -x) {
                st.pop();
            }
            else if (st.top() == -x) {
                st.pop();
                return;
            }
            else {
                return;
            }
        }
        st.push(x);
    }

public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int x : asteroids)
            give(st, x);

        vector<int> ans(st.size());

        for (int i = st.size() - 1; i >= 0; i--) {
            ans[i] = st.top();
            st.pop();
        }

        return ans;
    }
};