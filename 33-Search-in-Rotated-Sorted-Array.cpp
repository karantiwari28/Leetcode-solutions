class Solution {
public:
    int search(vector<int>& nums, int target) {
      int n = nums.size();
      int l = 0; int h = n-1;
      int mid = l+(h-l) / 2;
      while(l <= h)
      {
            if(nums[mid] == target)
                return mid;
            if(nums[mid] >= nums[l]) 
        {
            if(target >= nums[l] && target <= nums[mid])
            {
                h = mid - 1;
            }
           else l = mid + 1;
        } 
        else {
          if(target >= nums[mid] && target <= nums[h]) 
                l = mid + 1;
          else  h = mid - 1;
        }
          mid = l+(h-l) / 2;
      }
      return -1;
    }
};