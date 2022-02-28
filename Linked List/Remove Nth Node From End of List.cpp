 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        if (head==NULL)
            return head;
        if(head->next==NULL)
        {
            if(n==1)
                return NULL;
            return head;
        }
        ListNode* p=head;
        int count=1;
        while(p->next!=NULL)
        {
            p=p->next;
            count++;
        }
        p=head;
        if(count==n)
            return head->next;
        for(int i=1; i<count-n; i++)
        {
            p=p->next;
        }
        p->next=p->next->next;
        return head;
    }
};
