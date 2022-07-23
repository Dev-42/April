class Solution {
public:
    void findCombination(int index,int target,vector<int> &arr,vector<vector<int>> &ans,vector<int> &ds)
    {
        if(index==arr.size())
        {
            if(target==0)
                ans.push_back(ds);
            return;
        }
        //Pick up an element
        
        if(arr[index]<=target)
        {
            ds.push_back(arr[index]);
            findCombination(index,target-arr[index],arr,ans,ds);
            ds.pop_back();
        }
        //Not picking up an element
        findCombination(index+1,target,arr,ans,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<vector<int>>ans;
        vector<int>ds;
        findCombination(0,target,candidates,ans,ds);
        return ans;
    }
};