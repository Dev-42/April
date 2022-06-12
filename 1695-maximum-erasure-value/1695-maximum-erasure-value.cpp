class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) 
    {
        unordered_set<int> st;
        int maxSum = 0;
        int start = 0;
        int j = 0;
        int runningSum = 0;
        
        while(j<nums.size())
        {
            int currEle = nums[j];
            if(st.find(nums[j]) == st.end())
            {
                st.insert(nums[j]);
                runningSum = runningSum + currEle;
                maxSum = max(maxSum,runningSum);
                j++;
            }
            else{
                int delEle = nums[start];
                runningSum = runningSum - delEle;
                st.erase(delEle);
                start++;
            }
        }
        return maxSum;
    }
};