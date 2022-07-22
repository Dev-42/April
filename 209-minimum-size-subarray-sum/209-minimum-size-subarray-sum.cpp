class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int n = nums.size();
        int left = 0;
        int right = 0;
        int shorter = INT_MAX;
        int sum = 0;
        while(right < n)
        {
            sum += nums[right];
            if(sum >= target)
            {
                while(sum >= target)
                {
                    sum -= nums[left];
                    left++;
                }
                shorter = min(shorter,right-left+2);
            }
            right++;
        }
        return shorter == INT_MAX ? 0 : shorter;
    }
};