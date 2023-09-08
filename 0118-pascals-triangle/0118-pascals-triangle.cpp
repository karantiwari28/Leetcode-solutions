class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0 ; i<numRows ; i++)
        {
            vector<int> newrow(i+1,1);
            for(int col=1 ; col<i ; col++)
            {
                newrow[col] = ans[i-1][col] + ans[i-1][col-1];
            }
            ans.push_back(newrow);
        }
        return ans;
    }
};