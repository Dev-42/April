class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        int res = 0; int cnt = 0;
        unordered_map<int, int> mp; mp[0] = 1;
        
        for(auto n : nums) {
            
            if(n % 2) cnt++;
            res += mp[cnt - k];
            mp[cnt]++;
        }
        
        return res;
    }
};