class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> n;
        for(int i=0 ; i<nums1.size() ; i++)
        {
            n.push_back(nums1[i]);
        }
        for(int i=0 ; i<nums2.size() ; i++)
        {
            n.push_back(nums2[i]);
        }
        sort(n.begin(),n.end());
        if(n.size()%2 == 0)
        {
            double s = ((n[n.size()/2-1]+n[n.size()/2+1-1]));
            return s/2;
        }
        else
        {
            return (double)n[(n.size()+1)/2-1];
        }
    }
};