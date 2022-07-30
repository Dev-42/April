class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) 
    {
        int window_sum = 0;
        int count = 0;
        int n = arr.size(),res = 0;
        for(int i = 0 ; i< k;i++)
            window_sum += arr[i];//Calculating the sum of the frist window
        for(int i = 0 ; i< n - k + 1 ; i++)
        {
            if(i != 0)
            {
                window_sum -= arr[i-1];
                window_sum += arr[i + k -1];
                //new window at each iteration is ready
            }
            int window_avg = window_sum / k;
            if(window_avg >= threshold)
                res += 1;
        }
        return res;
    }
};