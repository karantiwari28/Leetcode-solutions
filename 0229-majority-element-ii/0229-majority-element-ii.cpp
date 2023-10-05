class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i=0 ; i<nums.size() ; i++) 
        {
            mp[nums[i]]++;
        }
        vector<int> ans;
        int cal = nums.size() / 3;
        for(auto cp : mp) 
        {
            int element = cp.first;
            int count = cp.second;
            if(count > cal) 
            {
                ans.push_back(element);
            }
        }
        return ans; 
    }
};