class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return head;
        ListNode* ptr=NULL;
        ListNode* curr=head;
        while(curr!=NULL && curr->next!=NULL){
            if(curr->val == curr->next->val){
                ptr=curr->next;
                curr->next=curr->next->next;
                delete(ptr);
            }
            else{
                curr=curr->next;
            }
        }
        return head;
    }
};
