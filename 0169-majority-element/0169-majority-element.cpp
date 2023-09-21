class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int i=0 ; i<nums.size() ; i++)
        {
            m[nums[i]]++;
        }
        int count=0,element=0;
        for(auto it = m.begin(); it != m.end(); ++it) 
        {
            if(it->second > count) 
            {
                element = it->first;
                count = it->second;
            }
        }
        return element;
    }
};