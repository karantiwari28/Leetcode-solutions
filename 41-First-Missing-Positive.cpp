class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int a=1;
        sort(nums.begin(), nums.end());
        for(int i=0 ; i<n ; i++)
        {
            if(nums[i] == a)
                a++;
        }
        return a;
    }
};
