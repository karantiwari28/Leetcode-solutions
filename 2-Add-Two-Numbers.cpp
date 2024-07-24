class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (l1 == NULL and l2 == NULL) return NULL;
\t\t\telse if (l1 == NULL) return l2; 
\t\t\telse if (l2 == NULL) return l1; 
        int a = l1->val + l2->val;
        ListNode *p = new ListNode(a%10);
        p->next = addTwoNumbers(l1->next,l2->next);
        if(a>=10) p->next = addTwoNumbers(p->next, new ListNode(1));
        return p;
    }
};