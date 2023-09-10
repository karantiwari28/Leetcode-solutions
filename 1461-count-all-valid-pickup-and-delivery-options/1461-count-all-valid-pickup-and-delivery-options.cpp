class Solution {
public:
    int countOrders(int n) {
        long long count = 1, mod = 1000000007;
        for(int i=1 ; i<n+1 ; i++)
            count = count*i%mod;
        for(int i=1 ; i<2*n ; i=i+2)
            count = count*i%mod;
        return count;
    }
};