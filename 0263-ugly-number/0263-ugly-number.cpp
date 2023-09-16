class Solution {
public:
    bool isUgly(int n) {
        if(n<=0) return false;
    vector<int>ans = {2,3,5};
    for(int i=0 ; i<ans.size();i++) {
        while(n % ans[i] == 0) {
            n = n/ans[i];
        }
    }
    if(n == 1) return true;
    return false;
    }
};