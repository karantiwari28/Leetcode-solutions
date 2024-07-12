class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        set<vector<int>> s;
        vector<vector<int>> v;
        int n = nums.size();
        for (int i = 0; i < n - 3; ++i) 
        {
            for (int j = i + 1; j < n - 2; ++j) 
            {
                int left = j + 1;
                int right = n - 1;
                while (left < right) 
                {
                long long int sum = static_cast<long long>(nums[i])+nums[j]+nums[left]+nums[right];
                if (sum == target) 
                {
                    s.insert({nums[i], nums[j], nums[left], nums[right]});
                    ++left;
                    --right;
                } 
                else if (sum < target) 
                {
                    ++left;
                } 
                else 
                {
                    --right;
                }
            }
        }
    }
    for (auto it : s) 
    {
        v.push_back(it);
    }
    return v;
    }
};