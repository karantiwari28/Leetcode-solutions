class Solution {
private:
    const int INF=1e9;
    vector<int> curr,prev;
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int len1=nums1.size(),len2=nums2.size();
        prev.resize(len2+1,-INF);
        for(int i=1;i<=len1;++i) {
            curr.resize(len2+1,-INF);
            for(int j=1;j<=len2;++j) {
                curr[j]=max({nums1[i-1]*nums2[j-1]+prev[j-1],
                              prev[j],
                              curr[j-1],
                              nums1[i-1]*nums2[j-1]});
            }
            prev=curr;
        }
        return curr[len2];
    }
};