class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=INT_MIN;
        int m=INT_MAX;
        int n=prices.size();
        for(int i=0 ; i<n ; i++){
            m=min(m,prices[i]);
            p=max(p,prices[i]-m);
        }
    return p;
    }
};