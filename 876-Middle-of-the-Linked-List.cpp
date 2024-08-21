class Solution {
public:
    int len(ListNode* head){
        int l=0;
        while(head != NULL){
            l++;
            head = head->next;
        }
        return l;
    }

    ListNode* middleNode(ListNode* head) {
        int l = len(head);
        int ans = l/2;
        int count = 0;
        ListNode* temp = head;
        while(count < ans){
            temp = temp->next;
            count++;
        }
        return temp;
    }
};