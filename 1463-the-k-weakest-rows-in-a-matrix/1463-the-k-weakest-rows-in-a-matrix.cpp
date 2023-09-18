class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        set<pair<int,int>> s;
        vector<int> ans;
        int r=0,count=0;
        for(r=0 ; r<mat.size() ; r++)
        {
            count = accumulate(mat[r].begin(), mat[r].end(), 0);
            s.insert(make_pair(count,r));
        }
        for(auto i=s.begin() ; i != s.end(), k>0 ; k--, i++)
        {
            ans.push_back(i->second);
        }
    return ans;
    }
};