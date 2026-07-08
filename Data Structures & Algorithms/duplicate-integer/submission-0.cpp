class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
      int l = 0; 
      unordered_set<int> seen ; 
      for(int r = 1 ; r < nums.size(); r++)
      {
        if(seen.count(nums[r]))
        {
            return true ;
        }
        seen.insert(nums[r]);
      }
      return false;
    }
};