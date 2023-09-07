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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head || left == right) return head;
        ListNode temp(0);
        temp.next = head;
        ListNode* pre = &temp;
        for(int i=0 ; i<left-1 ; i++)
        {
            pre = pre->next;
        }
        ListNode* curr = pre->next;
        for(int i=0 ; i<right-left ; i++)
        {
            ListNode* nextNode = curr->next;
            curr->next = nextNode->next;
            nextNode->next = pre->next;
            pre->next = nextNode;
        }
        return temp.next;
    }
};