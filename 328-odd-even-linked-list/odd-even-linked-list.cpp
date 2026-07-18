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
    ListNode* oddEvenList(ListNode* head) 
    {
        ListNode* odd=new ListNode(0);   
        ListNode* even=new ListNode(0);   
        ListNode* modd=odd;
        ListNode* meven=even;
        ListNode* mover=head;
        int flag=1;
        while(mover)
        {
            if(flag)
            {
                modd->next=mover;
                modd=modd->next;
            }
            else 
            {
                meven->next=mover;
                meven=meven->next;
            }
            mover=mover->next;
            flag=!flag;
        }
        modd->next=even->next;
        meven->next=nullptr;
        return odd->next;
    }
};