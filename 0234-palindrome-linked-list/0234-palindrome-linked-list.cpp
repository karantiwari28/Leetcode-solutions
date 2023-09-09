class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head; 
        stack<int> s;
        while(temp)
        {
            s.push(temp->val);
            temp = temp->next;
        }
        bool ans= false;
        temp = head;
        while(temp)
        {
            if(temp->val == s.top())
            {
                ans = true;
                s.pop();
                temp = temp->next;
            }
            else
            {
                return false;
            }
        }
        return ans;
    }
};