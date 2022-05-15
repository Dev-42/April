class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        int start = 0,end = nums.size()-1;
        if(nums[start] < nums[end])
            return nums[start];
        while(start < end)
        {
            int mid = start +(end - start)/2;
            if(nums[mid] > nums[end])
            {
                start = mid + 1;
            }
            else if(nums[mid] < nums[end])
            {
                end = mid;
            }
            else{
                end--;
            }
        }
        return nums[start];
    }
};