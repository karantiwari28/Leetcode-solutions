class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int last = -1, mid = -1, curr = -1;
        int f = 0, l = 0, mn = INT_MAX;
        int len = 0;

        while(head) {
            int val = head -> val;
            last = mid;
            mid = curr;
            curr = val;

            if(len >= 2 && ((mid > last && mid > curr) || (mid < last && mid < curr))) {
                if(f == 0) f = len, l = len;
                else {
                    mn = min(len - l, mn);
                    l = len;
                }
            }

            head = head -> next;
            len++;
        }   

        if(mn == INT_MAX) return {-1, -1};

        return {mn, l - f};
    }
};