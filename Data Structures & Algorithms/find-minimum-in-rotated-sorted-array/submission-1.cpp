class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0 ; 
        int r = nums.size() - 1 ; 
        int answer = nums[0];
        while(l <= r)
        {
            if(nums[l] < nums[r])
            {
                answer = min(answer , nums[l]);
            }
            int m = (l+r) / 2 ; 
            answer = min(answer , nums[m]);
            if(nums[m] >= nums[l])
            {
                l = m + 1;
            }
            else{
                r=m-1;
            }
        }
        return answer ; 
    }
};
