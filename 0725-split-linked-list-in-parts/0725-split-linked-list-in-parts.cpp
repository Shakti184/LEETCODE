class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        if(k==1) return {head};
        vector<ListNode*> ans;
        int n = 0;
        ListNode *currNode = head;
        while(currNode) {
            n++;
            currNode = currNode->next;
        }
        int i = n/k;
        int mod = n%k;
        int tmp = 1;
        // cout<<n<<" "<<k<<" "<<mod<<endl;
        currNode = head;
        ListNode* prev = head;
        bool f = true;
        while(currNode) {
           if(tmp++ >= i) {
                if(f && n>k && mod-->0){
                    // cout<<"yes"<<endl;
                    tmp--;
                    currNode = currNode->next;
                    f = false;
                    continue;
                }
                f = true;
                tmp = 1;
                ans.push_back(prev);
                prev = currNode->next;
                currNode->next = NULL;
                currNode = prev;
            } else {
                currNode = currNode->next;
            }
        }

        while(n < k--) ans.push_back(NULL);

        return ans;
    }
};