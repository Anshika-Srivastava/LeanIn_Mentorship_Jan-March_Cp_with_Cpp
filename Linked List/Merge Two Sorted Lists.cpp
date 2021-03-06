class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* ans = NULL;
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        if(l1->val <= l2->val)
        {
            ans = l1; 
            ans->next = mergeTwoLists(l1->next, l2);
        }
        else{
            ans = l2;
            ans->next = mergeTwoLists(l1, l2->next);
        }
        return ans;
    }
};
