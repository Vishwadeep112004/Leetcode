/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        stack<int> st;
        ListNode* mover=head;
        while(mover)
        {
            st.push(mover->val);
            mover=mover->next;
        }

        mover=head;
        int mx=INT_MIN;
        while(mover)
        {
            mx=max(mx,mover->val + st.top());
            st.pop();
            mover=mover->next;
        }
        return mx;
    }
};