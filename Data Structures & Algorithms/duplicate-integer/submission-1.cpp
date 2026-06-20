class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
      for(int l = 0 ; l < nums.size() ; l++)
      {
        for(int r = l + 1 ; r < nums.size(); r++)
        {
          if(nums[l] == nums[r])
          {
            return true;
          }
        }
      }
      return false;
    }
};