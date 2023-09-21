class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size(), i;
        sort(citations.begin(),citations.end());
        for( i=1 ; i<=n ; i++)
        {
            if(citations[n-i] < i)
                break;
        }
        return i-1;
    }
};