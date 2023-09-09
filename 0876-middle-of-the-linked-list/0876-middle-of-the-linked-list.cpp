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
    ListNode* middleNode(ListNode* head) {
        int i=0;
        ListNode* count = head; 
        while(head != NULL)
        {
            if(i%2 == 1)
            {count = count->next;}
            head = head->next;
            i++;
        }
        return count;
    }
};