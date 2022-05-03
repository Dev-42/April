class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
		// easy version
		// we just sort a copy array
		// find where the index is different
        vector<int> temp = nums;
        sort(temp.begin(),temp.end());
        int n = nums.size();
        int start_index = 0, end_index = n - 1;
        while(start_index < n)
        {
            if(nums[start_index] != temp[start_index]) break;
            start_index++;
        }
        while(end_index>=0)
        {
            if(nums[end_index] != temp[end_index]) break;
            end_index--;
        }
        return start_index > end_index?0:end_index-start_index+1;
    }
};