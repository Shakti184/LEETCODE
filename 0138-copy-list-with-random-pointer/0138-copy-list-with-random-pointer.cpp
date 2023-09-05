// Recursive + Hash Table - SC = O(n)
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

// class Solution {
//     unordered_map<Node*, Node*> Map;
// public:
//     Node* copyRandomList(Node* head) {
//         if(!head) return nullptr;
//         Node *head1 = new Node(head -> val);
//         Map[head] = head1;
//         head1 -> next = copyRandomList(head -> next);
//         head1 -> random = head -> random == nullptr? nullptr: Map[head -> random];
//         return head1;
//     }
// };

//--------------------------------------------
// Three Pass - SC = O(1)
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *p = head;
        while(p) {
            Node* temp = new Node(p -> val, p -> next, nullptr);
            p -> next = temp;
            p = temp -> next;
        }
        p = head;
        while(p) {
            if(p -> random)
                p -> next -> random = p -> random -> next;
            p = p -> next -> next;
        }
        p = head;
        Node *q;
        head = p? p -> next: nullptr;
        while(p) {
            q = p -> next;
            p -> next = q -> next;
            p = p -> next;
            q -> next = p ? p -> next: nullptr;
        }
        return head;
    }
};