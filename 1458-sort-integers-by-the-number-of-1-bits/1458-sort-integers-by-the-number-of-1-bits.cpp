class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(), [](const int &a, const int &b)
        {
            int cA=__builtin_popcount(a), cB=__builtin_popcount(b);
            return cA==cB ? a<b : cA<cB; 
        }); 
        return arr;
    }
};