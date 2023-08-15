class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode*temp1=new ListNode(-1),*temp2=new ListNode(-1);
        ListNode*head1=temp1,*head2=temp2;
        while(head){
            if(head->val<x){
                head1->next=head;
                head1=head1->next;
                head=head->next;
                head1->next=NULL;
            }else{
                head2->next=head;
                head2=head2->next;
                head=head->next;
                head2->next=NULL;
            }
        }
        head1->next=temp2->next;
        return temp1->next;
    }
};