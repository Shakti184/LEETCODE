class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode*temp=new ListNode(-1),*prev=temp,*curr;
        temp->next=head;
        for(int i=0;i<left-1;i++){
            prev=prev->next;
        }
        curr=prev->next;
        for(int i=0;i<right-left;i++){
            ListNode* temp=prev->next;
            prev->next=curr->next;
            curr->next=curr->next->next;
            prev->next->next=temp;
        }
        return temp->next;
    }
};