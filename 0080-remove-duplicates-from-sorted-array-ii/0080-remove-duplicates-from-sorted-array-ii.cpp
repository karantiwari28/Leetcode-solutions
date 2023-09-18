class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n <= 2)
            return n;
        int x = 0;
        for(int i=2; i<nums.size(); i++)    {
            if(nums[i] != nums[x])  {
                nums[x+2] = nums[i];
                x++;
            }
        }
        return x+2;
    }
};