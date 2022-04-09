class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int,int> counts;
        priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> min_heap;
        
        for(auto it:nums)
            counts[it]++;
        //Storing it as a pair in min heap
        for(auto it : counts)
        {
            min_heap.push({it.second,it.first});
            
            if(min_heap.size() > k)
                min_heap.pop();
        }
        
        vector<int> res;
        while(k--)
        {
            res.push_back(min_heap.top().second);
            min_heap.pop();
        }
        return res;
    }
};