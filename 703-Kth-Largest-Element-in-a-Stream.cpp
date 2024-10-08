class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    int len;
    KthLargest(int k, vector<int> nums) {
        len=k;
        for(auto val:nums) {
            pq.push(val);
            if(pq.size()>k) pq.pop();
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size()>len) pq.pop();
        return pq.top();
    }
};